/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:56:56 by itovar-n          #+#    #+#             */
/*   Updated: 2022/12/20 17:47:25 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);

int		ft_putchar(va_list ap);
int		ft_putstr(va_list ap);
int		ft_putptr_hexamin(va_list ap);
int		ft_putnbr(va_list ap);
int		ft_putnbr_unsigned(va_list ap);
int		ft_putnbr_hexamin(va_list ap);
int		ft_putnbr_hexacap(va_list ap);
int		ft_putpercent(va_list ap);
int		ft_parse_pos(char s);
int		ft_alloc(va_list ap, int nb);

void	ft_printf_void(const char *str, ...);

#endif
