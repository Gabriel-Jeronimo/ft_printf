/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:28:55 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/10 19:44:28 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	aux_len;

	if (*s2 == '\0')
		return ((char *)s1);
	aux_len = ft_strlen(s2);
	while (*s1 != '\0' && len >= aux_len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, aux_len) == 0)
			return ((char *)s1);
		len--;
		s1++;
	}
	return (NULL);
}
