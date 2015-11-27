/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:06:35 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 17:02:31 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strncpy(char *dst, const char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dst[i] = '\0';
	}
	return (dst);
}
