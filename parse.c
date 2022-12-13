/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:53:23 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 17:37:07 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse_pos(char s)
{
	int		i;
	char	*str;

	i = 0;
	str = "cspdiuxX%";
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_alloc(va_list ap, int nb)
{
	int	result;
	int	(*ptr_ft[9])(va_list);

	ptr_ft[0] = &ft_putchar;
	ptr_ft[1] = &ft_putstr;
	ptr_ft[2] = &ft_putptr_hexamin;
	ptr_ft[3] = &ft_putnbr;
	ptr_ft[4] = &ft_putnbr;
	ptr_ft[5] = &ft_putnbr_unsigned;
	ptr_ft[6] = &ft_putnbr_hexamin;
	ptr_ft[7] = &ft_putnbr_hexacap;
	ptr_ft[8] = &ft_putpercent;
	result = ptr_ft[nb](ap);
	return (result);
}
