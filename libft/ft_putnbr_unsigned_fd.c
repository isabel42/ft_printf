/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:08:20 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 15:28:46 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_unsigned_fd(n / 10, fd);
		ft_putnbr_unsigned_fd(n % 10, fd);
	}
}
