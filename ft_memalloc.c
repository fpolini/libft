/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:27:30 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/29 20:23:26 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char*)malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < size)
		{
			str[i] = 0;
			i = i + 1;
		}
		return ((void*)str);
	}
}
