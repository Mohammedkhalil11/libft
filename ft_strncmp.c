/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:07:57 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/23 23:34:55 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k;
	unsigned char	*j;
	size_t			i;

	k = (unsigned char *)s1;
	j = (unsigned char *)s2;
	i = 0;
	while (n > 0 && i < n)
	{
		if (k[i] == '\0' || j[i] == '\0')
			return (k[i] - j[i]);
		if (k[i] == j[i])
		{
			if (i == (n))
				return (0);
		}
		if (k[i] > j[i])
			return (1);
		if (k[i] < j[i])
			return (-1);
		i++;
	}
	return (0);
}
