/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:42:37 by lujin             #+#    #+#             */
/*   Updated: 2024/11/20 13:40:33 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*tab(int start, int end, char const *s)
{
	char	*t;
	int		i;

	i = 0;
	t = malloc(sizeof(char) * (end - start + 1));
	if (t == NULL)
		return (0);
	while (i < end - start)
	{
		t[i] = s[i + start];
		i++;
	}
	t[i] = 0;
	return (t);
}

int	sizechar(char const *s, char c)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
			count ++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	int		start;
	int		i;
	int		k;

	i = 0;
	k = 0;
	t = malloc(sizeof(char *) * (sizechar(s, c) + 1));
	if (!t || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			t[k++] = tab(start, i, s);
	}
	t[k] = NULL;
	return (t);
}
