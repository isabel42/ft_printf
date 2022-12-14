/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:14:47 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/21 15:50:11 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(ap, str);
	while (str[i])
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
	int b;
	int a;
	//int j = 2147483643;	printf("%p\n",(void *) -14523);
	a = printf("%x", 9223372036854775807LL);
	printf("--%d\n",a);
	printf("------------------\n");
	b = ft_printf("%x", LONG_MAX);
	printf("--%d\n",b);
	//printf("%c\n",'B');
	//ft_printf("simple text\n");
	//printf("this is a test\n");
	//
}*/
