/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hexamin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/20 17:44:42 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hexamin(va_list ap)
{
	unsigned long	n;
	int				result;
	char			*base;
	unsigned long	size;

	n = va_arg(ap, unsigned long long);
	ft_putstr_fd("0x", 1);
	result = 2;
	base = "0123456789abcdef";
	if (n == 0)
	{
		result = result + 1;
		ft_putstr_fd("0", 1);
		return (result);
	}
	size = ft_strlen(base);
	ft_putnbr_base_fd(n, base, 1);
	while (n >= size)
	{
		result++;
		n = (n - (n % size)) / size;
	}
	return (result + 1);
}
