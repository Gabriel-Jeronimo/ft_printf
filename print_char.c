/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:20:08 by coder             #+#    #+#             */
/*   Updated: 2021/10/24 00:51:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_char(char *character)
{
	int length;

	length = 0;
	while(*character)
	{
		write(1, character, 1);
		character++;
		length++;
	}
	return length;
}