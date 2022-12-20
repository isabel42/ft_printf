/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/20 17:31:06 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(va_list ap)
{
	int	n;
	int	result;

	result = 0;
	n = va_arg(ap, int);
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
	{
		result = result + 3;
		n = 21474836;
	}
	if (n < 0)
	{
		result++;
		n = n * (-1);
	}
	while (n > 9)
	{
		result++;
		n = (n - (n % 10)) / 10;
	}
	return (result + 1);
}
