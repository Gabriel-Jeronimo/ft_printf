/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:09:54 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/10 16:43:48 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long int num)
{	
	if (!num && !IS_MACOS)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (convert_to_hexadecimal(num, "0123456789abcdef") + 2);
}
