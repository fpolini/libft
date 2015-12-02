/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:30:32 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 16:20:18 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*str;

	str = ft_memalloc(n);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, src, n);
	dst = ft_memcpy(dst, ((const void*)str), n);
	return (dst);
}
