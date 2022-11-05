/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:58:26 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 22:02:18 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*k ;
	unsigned char	*j;
	size_t			i;

	k = (unsigned char *) s1;
	j = (unsigned char *) s2;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			if (k[i] != j[i])
				return ((k[i] - j[i]));
					i++;
		}
	}
	return (0);
}
