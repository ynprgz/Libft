/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 03:39:34 by yaperalt          #+#    #+#             */
/*   Updated: 2024/09/27 04:15:38 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;

	if (!lst || !del || !f)
		return (NULL);
	new_head = NULL;
	new_node = NULL;
	while (lst)
	{
		if (!f)
			new_node = ft_lstnew(lst->content);
		else
			new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		lst = lst->next;
	}
	return (new_head);
}
