/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:23:36 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/10 18:40:42 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(va_list ap)
{
	int		i;
	char	*str;

	i = 0;
	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
