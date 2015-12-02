/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:32:39 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 17:29:48 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char		*pointeur;
	size_t			i;

	pointeur = &s1[0];
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (ft_strncmp(pointeur, s2, ft_strlen(s2)) == 0)
			return ((char*)pointeur);
		else
		{
			i = i + 1;
			pointeur = &s1[i];
		}
	}
	return (NULL);
}
