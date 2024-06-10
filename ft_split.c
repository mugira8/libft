/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:29:08 by amugira-          #+#    #+#             */
/*   Updated: 2024/06/10 16:24:35 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(const char *s, char c)
{
	size_t	i;
	size_t	check;

	i = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			i++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (i);
}

static size_t	count_chars(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	length;
	char	**arr;

	length = count_words(s, c);
	arr = (char **)malloc((length + 1) * sizeof(char *));
	i = 0;
	if (arr == 0)
		return (0);
	while (i < length && s)
	{
		while (*s == c)
			s++ ;
		arr[i] = ft_substr(s, 0, count_chars(s, c));
		s += count_chars(s, c) + 1;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
