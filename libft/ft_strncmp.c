/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:06:36 by gjeronim          #+#    #+#             */
/*   Updated: 2021/09/07 15:55:58 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while ((s1[counter] != 0 && s1[counter] == s2[counter]) && counter < n - 1)
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
