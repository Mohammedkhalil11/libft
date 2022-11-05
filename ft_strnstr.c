/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:40:50 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/24 00:12:27 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle[0] && len == 0)
		return (0);
	if (!needle[0])
		return ((char *)haystack);
	while (*haystack && ft_strlen(needle) <= len)
	{
		if (*haystack == *needle
			&& !ft_memcmp(haystack, needle, ft_strlen(needle)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}*/
