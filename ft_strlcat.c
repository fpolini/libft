/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:33 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/08 14:26:19 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = 0;
	k = ft_strlen(dst) + ft_strlen(src);
	if (n < ft_strlen(dst))
		return (n + ft_strlen(src));
	if (n == ft_strlen(dst))
		return (n);
	else
	{
		while (src[j] != '\0' && i < n - 1)
		{
			dst[i] = src[j];
			i = i + 1;
			j = j + 1;
		}
		dst[i] = '\0';
		return (k);
	}
}
