/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:18:12 by lujin             #+#    #+#             */
/*   Updated: 2024/11/14 12:10:24 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int siz)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = ft_strlen(dst);
	b = ft_strlen(src);
	i = 0;
	if (siz <= a)
		return (siz + b);
	while (src[i] && a + i < siz - 1)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[i + a] = '\0';
	return (a + b);
}
