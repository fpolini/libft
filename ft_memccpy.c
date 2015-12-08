/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:08:17 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/08 13:38:07 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	*pointeur;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	pointeur = &s2[0];
	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (s2[i] == ch)
		{
			pointeur = &s2[i + 1];	
			return ((void*)pointeur);
		}
		else
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i = i + 1;
		}
	}
	return (NULL);
}
