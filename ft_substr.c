/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:12 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/24 00:42:15 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	i = 0;
	while (s[i + start] && i < len)
		i++;
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		p[i] = s[i + start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
