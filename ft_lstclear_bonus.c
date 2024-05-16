/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:56:36 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/23 09:16:36 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (lst)
	{
		while (*lst)
		{
			list = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = list;
		}
		*lst = 0;
	}
}
