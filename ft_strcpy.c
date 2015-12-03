/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:25:06 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/03 19:33:58 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;
	char	*ptr;
	
	i = 0;
	ptr = (char*)src;
	
	while (src[i] != '\0')
	{
		dst[i] = ptr[i];
		i = i + 1;
	}
	dst[i + 1] = ptr[i + 1];
	return (dst);
}
