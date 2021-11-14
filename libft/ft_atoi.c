/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:43:13 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/04 20:27:00 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;

	signal = 1;
	result = 0;
	while (*str == '\n' || *str == '\t' || *str == '\r'
		|| *str == '\v' || *str == '\f' || *str == ' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
			result = result * 10 + *str - 48;
		else
			return (result * signal);
		str++;
	}
	return (result * signal);
}
