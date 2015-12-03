/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:47:33 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 17:51:50 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	int	i;

	i = 0;
	while (as[i] != NULL)
	{
		as[i] = NULL;
		free(as[i]);
		i = i + 1;
	}
}