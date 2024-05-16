/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:41:18 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/18 11:17:28 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;
	int		i;

	i = n;
	if (n <= -2147483647 - 1)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (i < 10 && i >= 0)
	{
		a = i + '0';
		write(fd, &a, 1);
	}
	else if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		a = i % 10 + '0';
		write(fd, &a, 1);
	}
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
	}
}
