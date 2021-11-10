/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:10:00 by gjeronim          #+#    #+#             */
/*   Updated: 2021/11/10 16:43:53 by gjeronim         ###   ########.fr       */
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
