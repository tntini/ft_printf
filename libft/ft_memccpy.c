/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tntini <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:08:13 by tntini            #+#    #+#             */
/*   Updated: 2018/06/13 11:14:42 by tntini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char*)src;
	j = (unsigned char*)dst;
	while (n-- > 0)
	{
		*j = *i;
		if (*i == (unsigned char)c)
			return ((void*)j + 1);
		i++;
		j++;
	}
	return (NULL);
}
