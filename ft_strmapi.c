/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:37:18 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/14 17:48:11 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	size_t	i;

	if (!s || !f)
		return (0);
	arr = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!arr)
		return (0);
	i = 0;
	while (s[i])
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
