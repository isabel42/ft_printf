/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexacap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 18:14:34 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_hexacap(va_list ap)
{
	long int		n;
	int				result;
	char			*base;
	long int		size;

	result = 0;
	n = va_arg(ap, long int);
	if (n < 0)
		n = n + 2 * 2147483648;
	base = "0123456789ABCDEF";
	size = (long int) ft_strlen(base);
	ft_putnbr_base_fd(n, base, 1);
	while (n > size)
	{
		result++;
		n = (n - (n % size)) / size;
	}
	return (result + 1);
}
