/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:15:33 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 18:53:10 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long ft_strlcat(char *dst, char *src, unsigned long n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < n)
	{
		i = i + 1;
	}
	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
