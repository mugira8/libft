/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:19 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/05 09:25:33 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	if (arg >= 'a' && arg <= 'z')
	{
		return (2);
	}
	if (arg >= 'A' && arg <= 'Z')
	{
		return (1);
	}
	return (0);
}
