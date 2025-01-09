/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:49:27 by lujin             #+#    #+#             */
/*   Updated: 2024/11/20 12:55:49 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		t = malloc(sizeof(char));
		if (!t)
			return (NULL);
		t[0] = 0;
		return (t);
	}
	i = ft_min(len, ft_strlen(s) - start) + 1;
	t = malloc(i * sizeof(char));
	i = 0;
	if (!t)
		return (NULL);
	while (i < len && i + start < ft_strlen(s))
	{
		t[i] = s[start + i];
		i++;
	}
	t[i] = '\0';
	return (t);
}
