/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:38:52 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 00:24:20 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	int					s;
	int					i;

	n = 0;
	s = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = (n * 10) + str[i] - '0';
		if (n > LLONG_MAX && s == 1)
			return (-1);
		if (n > LLONG_MAX && s == -1)
			return (0);
		i++;
	}
	return (n * s);
}
// #include <stdio.h>

// int main()
// {
//     char a[] ="-92233720776875";
//     printf("%d \n",ft_atoi(a));
//     printf("%d",atoi(a));   
// }
