/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:38:50 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 21:32:14 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	if (ptr && del)
	{
		while (*lst)
		{
			del(ptr->content);
			ptr = ptr->next;
			free(*lst);
			*lst = ptr;
		}
	}
}
