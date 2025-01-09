/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lujin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:20:36 by lujin             #+#    #+#             */
/*   Updated: 2024/11/15 12:26:03 by lujin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (!lst || !*f || !*del)
		return (0);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (0);
	first = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new->next = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&first, *del);
			return (0);
		}
		new = new->next;
	}
	return (first);
}
