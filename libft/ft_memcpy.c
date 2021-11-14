/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:10:53 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/14 14:48:16 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	counter;
	char			*navigable_dest;
	char			*navigable_src;

	if (dest == NULL && src == NULL && n)
		return (NULL);
	counter = 0;
	navigable_dest = (char *) dest;
	navigable_src = (char *) src;
	while (counter < n)
	{
		navigable_dest[counter] = navigable_src[counter];
		counter++;
	}
	return (dest);
}
