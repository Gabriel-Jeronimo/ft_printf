/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:42:00 by coder             #+#    #+#             */
/*   Updated: 2021/11/07 01:58:21 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long int num)
{	
	write(1, "0x", 2);
	return (convert_to_hexadecimal(num, "0123456789abcdef") + 2);
}
