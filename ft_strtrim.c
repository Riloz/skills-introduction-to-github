/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:57:34 by lujin             #+#    #+#             */
/*   Updated: 2024/11/14 12:30:32 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_here(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*t;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_here(s1[start], set) == 1 && s1[start])
		start++;
	while (ft_here(s1[end], set) == 1 && end > start)
		end--;
	t = malloc((end - start + 2) * sizeof(char));
	if (!t)
		return (NULL);
	i = 0;
	while (i <= end - start)
	{
		t[i] = s1[i + start];
		i++;
	}
	t[i] = '\0';
	return (t);
}
