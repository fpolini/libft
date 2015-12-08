/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:08:17 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/08 12:21:08 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = dst;
	s2 = (void*)src;
	i = 0;
	ch = c;
	while (i < n)
	{
		if (s2[i] == ch)
			return ((void*)&s2[i + 1]);
		else
			s1[i] = s2[i];
		i = i + 1;
	}
	return (NULL);
}
