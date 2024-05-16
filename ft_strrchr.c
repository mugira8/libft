/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:46:04 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/05 14:35:49 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	ch;

	i = ft_strlen((char *)str);
	s = (char *)str;
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return (&s[i]);
		}
		i--;
	}
	return (0);
}
