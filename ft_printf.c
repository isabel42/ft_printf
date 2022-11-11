/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:14:47 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 17:56:39 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			result = result + ft_alloc(ap, ft_parse_pos(str[i]));
		}
		else
		{
			result++;
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (result);
}
/*
int main()
{
	int i = -5;
	//int j = 2147483643;
	printf("%x\n", i );
	ft_printf("%x\n", i);
	//ft_printf("simple text\n");
	//printf("%c\n",'B');
	//printf("this is a test\n");
	//printf("this is a string: %s and this is an int %d", "this is a test", 6);
}
*/
