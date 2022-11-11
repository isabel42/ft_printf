/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hexamin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 18:14:16 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr_hexamin(va_list ap)
{
	int		n;
	int		result;
	char	*base;
	int		size;

	ft_putstr_fd("0x", 1);
	result = 2;
	n = va_arg(ap, int);
	base = "0123456789abcdef";
	size = (int) ft_strlen(base);
	ft_putnbr_base_fd(n, base, 1);
	while (n > size)
	{
		result++;
		n = (n - (n % size)) / size;
	}
	return (result + 1);
}
