/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhalil <mokhalil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:01:04 by mokhalil          #+#    #+#             */
/*   Updated: 2022/10/22 22:24:44 by mokhalil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	l;
	int			c;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l *= -1;
	}
	if (l > 9)
	{
		ft_putnbr_fd(l / 10, fd);
		ft_putnbr_fd(l % 10, fd);
	}
	else
	{
		c = l + 48;
		write(fd, &c, 1);
	}
}
