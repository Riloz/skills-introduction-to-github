/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:51:21 by lujin             #+#    #+#             */
/*   Updated: 2024/11/14 12:21:26 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*t;
	unsigned int	i;

	i = 0;
	t = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!t)
		return (NULL);
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = 0;
	return (t);
}
