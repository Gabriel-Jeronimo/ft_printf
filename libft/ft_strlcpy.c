/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:47:27 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/24 16:50:37 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*navigable_dst;
	char	*navigable_src;
	size_t	counter;

	navigable_dst = (char *) dst;
	navigable_src = (char *) src;
	counter = 0;
	if (dstsize <= 0)
	{
		return (ft_strlen((char *)src));
	}
	while (navigable_src[counter] != 0 && counter < dstsize - 1)
	{
		navigable_dst[counter] = navigable_src[counter];
		counter++;
	}
	navigable_dst[counter] = '\0';
	while (navigable_src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
