/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:56:44 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/29 15:09:01 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char		*ft_strstr(const char *s1, const char *s2)
{
	const char *pointeur;
	int i;

	pointeur = s1;
	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strncmp(pointeur, s2, ft_strlen(s2) >= 0))
			return (pointeur);
		else
		{
			i = i + 1;
			pointeur = &s1[i];
		}
	}
	return (pointeur);
}

