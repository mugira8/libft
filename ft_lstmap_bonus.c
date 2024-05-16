/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amugira- <amugira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:30:07 by amugira-          #+#    #+#             */
/*   Updated: 2022/09/26 19:43:47 by amugira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void*))
{
	t_list	*new;
	t_list	*aux;
	void	*a;

	new = 0;
	while (lst)
	{
		a = f(lst->content);
		aux = ft_lstnew(a);
		if (!aux)
		{
			free(a);
			ft_lstclear(&aux, del);
			return (0);
		}
		ft_lstadd_back(&new, aux);
		lst = lst -> next;
	}
	return (new);
}
