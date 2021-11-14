/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:40:01 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/30 14:44:53 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number < 0)
	{
		write(fd, "-", 1);
		if (number == -2147483648)
		{
			write(fd, "2", 1);
			number = -147483648;
		}
		number = -number;
	}
	if (number < 10)
	{
		number = number + '0';
		write(fd, &number, 1);
	}
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}
