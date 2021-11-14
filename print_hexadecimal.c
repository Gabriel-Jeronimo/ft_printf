/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:09:31 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/12 19:55:34 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_to_hexadecimal(unsigned long int number, const char *base)
{
	static int	length;

	length = 0;
	if (number >= 16)
	{
		convert_to_hexadecimal(number / 16, base);
	}
	write(1, &base[number % 16], 1);
	length++;
	return (length);
}

int	print_hexadecimal(unsigned int number, const char *type)
{
	char	*base;

	if (*type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (convert_to_hexadecimal(number, base));
}

int	print_pointer(unsigned long int num)
{	
	if (!num && !IS_MACOS)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (convert_to_hexadecimal(num, "0123456789abcdef") + 2);
}
