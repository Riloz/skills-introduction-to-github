/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:21:32 by lujin             #+#    #+#             */
/*   Updated: 2024/11/12 11:25:36 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int			i;
	int			j;
	int			last;

	i = 0;
	j = 0;
	last = 0;
	c = c % 256;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
			j = 1;
		}
		i++;
	}
	if (c == 0)
		return (s + i);
	if (j != 0)
		return (s + last);
	return (NULL);
}
