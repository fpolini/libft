/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:56:44 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/03 20:16:00 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	char	*pointeur;
	int		i;

	pointeur = (char*)s1;
	i = 0;
	while (ft_strlen(pointeur) > n)
	{
		pointeur = ft_strchr(s1, s2[0]);
		if (ft_strnequ(pointeur, s2, n) == 0)
			return (pointeur);
	}
	return (NULL);
}
