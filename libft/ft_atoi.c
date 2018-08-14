/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tntini <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 11:15:05 by tntini            #+#    #+#             */
/*   Updated: 2018/06/13 11:15:14 by tntini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	int		number;

	i = 0;
	while ((*str >= '\t' && *str <= '\r') || (*str == 32))
		str++;
	if (*str == '-')
		number = -1;
	else
		number = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
		i = (i * 10) + (*str++ - '0');
	if (i < 0 && number == 1)
		return (-1);
	if (i < 0)
		return (0);
	return (i * number);
}
