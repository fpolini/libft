/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:34:03 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/30 12:12:58 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*pointeur;
	char		k;
	int		i;

	pointeur = "NULL";
	i = ft_strlen(s);
	//printf("%zu", i);
	k = (char)c;
	//ft_putchar('2');
	ft_putchar(s[i]);
	while (s[i] != k && i == 0)
	{
		i = i - 1;
		ft_putchar('1');
	}
	if (i == 0 && s[i] != k)
		return ((char*)pointeur);
	else
	{
		pointeur = &s[i + 1];
		return ((char*)pointeur);
	}
}
