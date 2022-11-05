/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:36:49 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/25 11:50:01 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	ld = 0;
	ls = ft_strlen(src);
	while (ld < size && dst[ld] != '\0')
		ld++;
	if (size == ld)
		return (ls + ld);
	i = 0;
	while (src[i] != '\0' && (ld + i + 1) < size)
	{
		dst[ld + i] = src[i];
		i++;
	}
	if (ld < size)
		dst[ld + i] = '\0';
	return (ls + ld);
}
