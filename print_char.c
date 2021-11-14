/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:09:03 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/12 19:34:59 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int character)
{
	write(1, &character, 1);
	return (1);
}

int	print_string(char *character)
{
	if (!character)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(character, 1);
	return (ft_strlen(character));
}
