/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:32:38 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/09 19:09:29 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while (alst[0]->next != NULL)
	{
		del(alst[0]->content, alst[0]->content_size);
		alst[0] = alst[0]->next;
	}
	if (alst && *alst)
	{
		free(*alst);
		*alst = NULL;
	}
}
