/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:47:43 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 22:07:03 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*k;

	k = (unsigned char *) src;
	p = (unsigned char *) dest;
	i = 0;
	if (src == dest || !n)
		return (dest);
	while (i < n)
	{
		p[i] = k[i];
		i++;
	}
	return (dest);
}
