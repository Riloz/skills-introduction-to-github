/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:01:41 by lujin             #+#    #+#             */
/*   Updated: 2024/12/26 15:36:43 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wp(int nb)
{
	if ((nb >= 9 && nb <= 13) || (nb == 32))
		return (1);
	return (0);
}

int	ft_atoi(const char *nb)
{
	int	i;
	int	x;
	int	sign;

	sign = 1;
	x = 0;
	i = 0;
	while (wp(nb[i]))
		i++;
	if (nb[i] == '+' || nb[i] == '-')
	{
		if (nb[i] == '-')
			sign = -1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		x = x * 10 + nb[i] - '0';
		i++;
	}
	return (x * sign);
}
