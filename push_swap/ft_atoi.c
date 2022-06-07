/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asallahi <asallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:26:50 by asallahi          #+#    #+#             */
/*   Updated: 2022/03/30 23:16:57 by asallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int				i;
	long				n;
	long long		res;

	i = 0;
	res = 0;
	n = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		||str[i] == '\f' || str[i] == '\v' || str[i] == ' ' )
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}
