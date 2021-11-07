/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:01:14 by coder             #+#    #+#             */
/*   Updated: 2021/11/07 01:47:51 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
