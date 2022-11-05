/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:09:34 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/28 03:52:52 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*n_node;
	int		i;

	i = 0;
	nl = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			n_node = ft_lstnew(f(lst->content));
			if (!n_node)
			{
				ft_lstclear(&nl, del);
				return (NULL);
			}
			ft_lstadd_back(&nl, n_node);
			lst = lst->next;
		}
	}
	return (nl);
}
