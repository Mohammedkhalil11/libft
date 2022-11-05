/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:41:54 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/24 00:38:25 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (!*s1 || (!*s1 && !*set))
		return (ft_calloc(1, 1));
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	if (!*s1)
		return (ft_calloc(1, 1));
	len = ft_strlen((char *)s1);
	while (len > 0 && (ft_strchr(set, s1[len])))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
