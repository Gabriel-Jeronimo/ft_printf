/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:37:34 by coder             #+#    #+#             */
/*   Updated: 2021/10/24 00:51:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int match_flag(const char *character, va_list args)
{
	if (*character == 'c' || *character == 's')
	{
		return print_char(va_arg(args, char *));
	}
	return 0;
}

int ft_printf(const char *input, ...)
{
	va_list args;
	int written_chars;
	
	written_chars = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			match_flag(input, args);
		}
		else
		{
			write(1, input, 1);
			written_chars++;
		}
		input++;
	}
	va_end(args);
	return 1;
}

int main(void)
{
	char *c = "aaaa";
	ft_printf("kkkk%c", c);
}