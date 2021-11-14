/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:09:12 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/13 00:37:13 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	match_flag(const char *character, va_list args)
{
	if (*character == 's')
		return (print_string(va_arg(args, char *)));
	else if (*character == 'c')
		return (print_char(va_arg(args, int)));
	else if (*character == 'i' || *character == 'd')
		return (print_number(va_arg(args, int)));
	else if (*character == 'u')
		return (print_number(va_arg(args, unsigned int)));
	else if (*character == 'x' || *character == 'X')
		return (print_hexadecimal(va_arg(args, unsigned int), character));
	else if (*character == 'p')
		return (print_pointer(va_arg(args, unsigned long int)));
	else if (*character == '%')
		return (write(1, character, 1));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		written_chars;

	written_chars = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%' && ft_strchr("cspudixX%", *(input + 1)))
		{
			input++;
			written_chars += match_flag(input, args);
		}
		else
			written_chars += write(1, input, 1);
		input++;
	}
	va_end(args);
	return (written_chars);
}
