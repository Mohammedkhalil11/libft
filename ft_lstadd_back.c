/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:14:23 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/25 11:40:08 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (new && lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new;
		}
	}
}
