/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 03:25:48 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/24 00:36:28 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + i));
	else
	{
		while (i--)
		{
			if (s[i] == (char)c)
				return ((char *)(s + i));
		}
		return (0);
	}
}
