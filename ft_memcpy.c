/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:37:03 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/06 10:40:53 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*mod_dest;
	const char	*mod_src;

	if (dest == 0 && src == 0)
		return (0);
	mod_dest = dest;
	mod_src = src;
	while (n > 0)
	{
		*mod_dest++ = *mod_src++;
		n--;
	}
	return (dest);
}
