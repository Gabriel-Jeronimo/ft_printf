/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:05:34 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/25 14:34:15 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *ptr1, const void *ptr2, size_t num )
{
	char	*ptr1_navigable;
	char	*ptr2_navigable;
	size_t	counter;

	counter = 0;
	ptr1_navigable = (char *)ptr1;
	ptr2_navigable = (char *)ptr2;
	while (counter < num)
	{
		if (ptr1_navigable[counter] != ptr2_navigable[counter])
		{
			return ((unsigned char)ptr1_navigable[counter]
				- (unsigned char) ptr2_navigable[counter]);
		}
		counter++;
	}
	return (0);
}
