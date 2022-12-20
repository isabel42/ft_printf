/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexacap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/20 17:31:22 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexacap(va_list ap)
{
	long int		n;
	int				result;
	char			*base;
	long int		size;

	result = 0;
	n = va_arg(ap, unsigned long long);
	base = "0123456789ABCDEF";
	size = (unsigned long long) ft_strlen(base);
	ft_putnbr_base_fd(n, base, 1);
	while (n > size)
	{
		result++;
		n = (n - (n % size)) / size;
	}
	return (result + 1);
}
