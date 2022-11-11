/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:08:20 by itovar-n          #+#    #+#             */
/*   Updated: 2022/11/11 17:58:15 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(int n, char *base, int fd)
{
	int	size;

	size = (int) ft_strlen(base);
	if (n < 0)
		n = n + 2147483648;
	if (n <= size)
		ft_putchar_fd(base[n], fd);
	else
	{
		ft_putnbr_base_fd(n / size, base, fd);
		ft_putnbr_base_fd(n % size, base, fd);
	}
}