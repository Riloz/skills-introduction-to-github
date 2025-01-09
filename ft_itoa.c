/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:04:23 by lujin             #+#    #+#             */
/*   Updated: 2024/11/14 13:25:43 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	n2;
	char			*t;

	i = size(n);
	n2 = n;
	t = malloc ((i + 1) * sizeof(char));
	if (!t)
		return (NULL);
	if (n == 0)
		t[0] = '0';
	if (n < 0)
	{
		n2 = -((unsigned int)n);
		t[0] = '-';
	}
	t[i--] = '\0';
	while (n2 > 0)
	{
		t[i--] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	return (t);
}
