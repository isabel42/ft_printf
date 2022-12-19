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
	int long		n;
	unsigned long long k;
	int				result;
	char			*base;
	int				size;

	ft_putstr_fd("0x", 1);
	result = 2;
	n = va_arg(ap, int long);
	printf("***%ld****", n);
	if (n < 0)
		k = n + 18446744073709551614;
	else
		k = n;
	base = "0123456789abcdef";
	size = ft_strlen(base);
	ft_putnbr_base_fd(k, base, 1);
	while (k > size)
	{
		result++;
		k = (k - (k % size)) / size;
	}
	return (result + 1);
}
