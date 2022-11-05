/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:06:44 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 22:12:10 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<limits.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*k;

	k = (unsigned char *)src;
	p = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (src <= dest)
	{
		while (0 < n)
		{
			p[n - 1] = k[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
