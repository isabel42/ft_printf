/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:29:35 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 15:25:47 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsigned(va_list ap)
{
	unsigned int	n;
	int				result;

	result = 0;
	n = va_arg(ap, unsigned int);
	ft_putnbr_unsigned_fd(n, 1);
	while (n > 9)
	{
		result++;
		n = (n - (n % 10)) / 10;
	}
	return (result + 1);
}
