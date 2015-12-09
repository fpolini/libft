/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 18:07:51 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/09 18:58:49 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = NULL;
	while (lst->next != NULL)
	{
		
		new = (t_list*)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		new = f(lst);
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (new);
}

