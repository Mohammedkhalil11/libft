/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:38:45 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/25 12:01:04 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count && size > SIZE_MAX / count)
		return (0);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero(s, count * size);
	return ((char *)s);
}
