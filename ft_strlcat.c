/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:33 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 13:31:36 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i = i + 1;
		if (i == n)
			dst[i] = '\0';
	}
	while (src[j] != '\0' && i < n)
	{
		dst[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	dst[i] = '\0';
	return (i);
}
