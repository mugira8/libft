/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:41:23 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/06 10:42:12 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*mod_dest;
	char		*mod_src;
	char		*last_dest;
	char		*last_src;

	if (dest == 0 && src == 0)
		return (0);
	mod_dest = dest;
	mod_src = (char *)src;
	if (mod_dest < mod_src)
	{
		while (n--)
			*mod_dest++ = *mod_src++;
	}
	else
	{
		last_dest = mod_dest + (n -1);
		last_src = mod_src + (n - 1);
		while (n--)
			*last_dest-- = *last_src--;
	}
	return (dest);
}
