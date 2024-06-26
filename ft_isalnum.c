/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:07:54 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/05 11:07:27 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (2);
	}
	if (arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	if (arg >= '0' && arg <= '9')
	{
		return (3);
	}
	return (0);
}
