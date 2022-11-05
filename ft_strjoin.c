/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:02:03 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/23 23:17:57 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*start;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (0);
	start = p;
	ft_memcpy(p, s1, ft_strlen(s1));
	p += ft_strlen((s1));
	ft_memcpy(p, s2, ft_strlen(s2));
	p += ft_strlen((s2));
	*p = '\0';
	return (start);
}
