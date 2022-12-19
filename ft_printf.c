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

int main()
 {
	//int b = 0;
	//int *a = &b;
	//int j = 2147483643;
	//ft_printf("this is a char: %c and this is and int %d\n", 'a', 1 );
	ft_printf("%p\n", (void *) -1);
	printf("%p\n", (void *) -1);
	//ft_printf("simple text\n");
	//printf("%c\n",'B');
	//printf("this is a test\n");
	ft_printf("this is a string: %s and this is an char %c", "this is a test", 'c');
}
