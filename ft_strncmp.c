/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:39:00 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/01 17:28:44 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int nbr;

	nbr = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
	{
		i = i + 1;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
