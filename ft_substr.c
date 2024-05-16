/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:57:02 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/26 18:33:29 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		i;

	if (s == 0)
		return (0);
	i = 0;
	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s) < len)
		len = ft_strlen(s);
	result = malloc(sizeof(*s) * (len + 1));
	if (result == 0)
		return (0);
	while (len > 0)
	{
		result[i] = s[start];
		i++;
		len--;
		start++;
	}
	result[i] = 0;
	return (result);
}
