/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:32:28 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/01 19:55:44 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**createtab(int	nblin, char nbcol)
{
	char	**tab1;
	char	*tab2;
	int		i;

	i = 0;
	tab1 = (char**)malloc(sizeof(char*) * nblin);
	tab2 = (char*)malloc(sizeof(char) * (nbcol + 1));
	while (i < nblin)
	{
		tab1[i] = &tab2[i * nbcol];
		i = i + 1;
	}
	return (tab1);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab1;
	char	*tab2;
	int		i;	
	int		t;

	t = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0');
			t = t + 1;

		i = i + 1;
	}


			





