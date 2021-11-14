/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:41:08 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/04 20:21:05 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		counter;
	char		*char_s;

	char_s = s;
	counter = 0;
	while (counter < n)
	{
		*char_s = c;
		char_s++;
		counter++;
	}
	return (s);
}
