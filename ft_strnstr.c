/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:51:19 by lujin             #+#    #+#             */
/*   Updated: 2024/11/20 12:30:59 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	if (little[i] == '\0')
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (i + j < len && big[i + j] == little[j] && little[j])
				j++;
			if (little[j] == '\0')
				return (big + i);
		}
		i++;
	}
	return (NULL);
}
