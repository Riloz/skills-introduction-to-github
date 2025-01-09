/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:26:25 by lujin             #+#    #+#             */
/*   Updated: 2024/11/08 14:11:17 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*t;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	t = malloc (nmemb * size);
	if (!t)
		return (NULL);
	ft_bzero(t, nmemb * size);
	return (t);
}
