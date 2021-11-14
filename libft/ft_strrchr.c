/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:49:50 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/25 10:23:08 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	counter;

	counter = ft_strlen((char *)s) + 1;
	while (counter--)
	{
		if (*(s + counter) == (char) c)
		{
			return ((char *)(s + counter));
		}
	}
	return (NULL);
}
