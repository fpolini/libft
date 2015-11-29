/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:47:25 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/29 21:07:46 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char a;
	unsigned char *ptr;
	int i;

	i = 0;
	a = (unsigned char)c;
	while (i < len)
	{
		ptr[i] = a;
		i = i + 1;
	}
	b = (void*)ptr;
	return (b);
}
