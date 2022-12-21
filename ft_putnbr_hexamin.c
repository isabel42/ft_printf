/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexamin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/21 16:12:28 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexamin(va_list ap)
{
	unsigned long long	n;
	char				*base;
	unsigned long long	size;
	int					result;

	n = va_arg(ap, unsigned int);
	result = 0;
	base = "0123456789abcdef";
	if (!n)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	ft_putnbr_base_fd(n, base, 1);
	size = (unsigned long long) ft_strlen(base);
	while (n >= size)
	{
		result++;
		n = (n - (n % size)) / size;
	}
	return (result + 1);
}
