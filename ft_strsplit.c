/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:32:28 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/09 16:45:32 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nb_word(const char *s, char c)
{
	int		nb;
	size_t	i;

	nb = 0;
	i = 0;
	if (ft_strlen(s) != 0)
	{
		while (i < (ft_strlen(s) - 1))
		{
			if (s[i] == c && s[i + 1] != c)
				nb = nb + 1;
			if (i == 0 && s[0] != c)
				nb = nb + 1;
			i = i + 1;
		}
	}
	return (nb);
}

int		nb_c_word(const char *s1, char c, int i)
{
	int	nb;

	nb = 0;
	if (s1[0] == c && i == 0)
		i = i + 1;
	while (s1[i] != '\0' && s1[i] != c)
	{
		nb = nb + 1;
		i = i + 1;
	}
	return (nb);
}

int		copy(const char *s, char *str, size_t i, char c)
{
	int	j;

	j = 0;
	
	if (str[i] == c && str[i + 1] != c)
		i = i + 1;
	//ft_putnbr(i);
	while (s[i] != '\0' && s[i] != c)
	{
		str[j] = s[i];
		ft_putchar(str[j]);
		i = i + 1;
		j = j + 1;
	}
	str[j] = '\0';
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	int			k;

	k = 0;
	i = 0;
	ft_putnbr(i);
	tab = (char**)malloc(sizeof(char*) * nb_word(s, c) + 1);
	if (tab == NULL)
		return (NULL);
	while (i < ft_strlen(s) - 1)
	{
		if ((s[i] == c && s[i + 1] != c) || ((s[0] != c && i == 0)))
		{
			tab[k] = ft_strnew(sizeof(char) * (nb_c_word(s, c, i) + 1));
		//	ft_putnbr(nb_c_word(s, c, i));
			if (tab[k] == NULL)
				return (NULL);
			i = copy(s, tab[k], i, c);
			//ft_putnbr(i);
			//ft_putstr(tab[k]);
	//		ft_putnbr(k);
			k = k + 1;
		}
		i = i + 1;
		ft_putnbr(i);
	}
	//ft_putnbr(k);
	tab[k] = NULL;
	return (tab);
}
