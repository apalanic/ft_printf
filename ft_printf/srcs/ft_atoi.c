/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalanic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:19:48 by apalanic          #+#    #+#             */
/*   Updated: 2016/11/25 11:27:23 by apalanic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_atoi(const char *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((9 <= *s && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
		if (*(s + 1) >= '0' && *(s + 1) <= '9' && *(s + 1) != '\0')
		{
			sign = 44 - *s;
			s++;
		}
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res * sign);
}
