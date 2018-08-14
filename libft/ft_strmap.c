/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tntini <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:18:55 by tntini            #+#    #+#             */
/*   Updated: 2018/06/13 11:19:01 by tntini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out;
	char *one;

	if (f && s)
	{
		one = ft_strnew(ft_strlen(s));
		if (!one)
			return (NULL);
		out = one;
		while (*s != 0)
		{
			*out++ = f(*s++);
		}
		return (one);
	}
	return (NULL);
}
