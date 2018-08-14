/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tntini <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:27:46 by tntini            #+#    #+#             */
/*   Updated: 2018/06/13 07:57:47 by tntini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		i;

	i = 0;
	alts = (char*)s;
	altc = c;
	while (alts[i] != altc)
	{
		if (alts[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char*)alts + i);
}
