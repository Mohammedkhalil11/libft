/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:43:09 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 21:22:49 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_tr(int n)
{
	int		i;
	char	*p;
	long	nbr;

	nbr = (long) n;
	i = len(nbr);
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	p[i--] = '\0';
	if (nbr == 0)
		p[0] = '0';
	if (nbr < 0)
	{
		p[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		p[i] = (nbr % 10) + 48;
		nbr = (nbr / 10);
		i--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;

	p = ft_tr(n);
	return (p);
}
