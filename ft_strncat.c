/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:56:49 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 13:30:46 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i = i + 1;
	}
	while (s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	s1[i] = '\0';
	return (s1);
}
