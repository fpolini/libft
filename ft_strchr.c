/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:15:42 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/29 17:41:19 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*pointeur;
	char		k;
	int			i;

	pointeur = "NULL";
	i = 0;
	k = (char)c;
	while (s[i] != k && s[i] != '\0')
	{
		i = i + 1;
	}
	if (s[i] == '\0')
		return ((char*)pointeur);
	else
	{
		pointeur = &s[i + 1];
		return ((char*)pointeur);
	}
}
