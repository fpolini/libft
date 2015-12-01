/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:34:03 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/01 16:42:22 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	const char	*pointeur;
	char		k;
	int			i;

	pointeur = "NULL";
	i = (int)(ft_strlen(s));
	k = (char)c;
	while (s[i] != k && i != 0)
	{
		i = i - 1;
	}
	if (i == 0 && s[i] != k)
		return ((char*)pointeur);
	else
	{
		pointeur = &s[i + 1];
		return ((char*)pointeur);
	}
}
