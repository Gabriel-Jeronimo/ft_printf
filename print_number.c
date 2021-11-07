/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:05:36 by coder             #+#    #+#             */
/*   Updated: 2021/11/07 01:48:05 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(unsigned long int number)
{
	char	*number_str;
	int		length;

	length = 1;
	number_str = ft_itoa(number);
	length = ft_strlen(number_str);
	ft_putstr_fd(number_str, 1);
	free(number_str);
	return (length);
}
