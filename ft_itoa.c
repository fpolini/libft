/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:56 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/18 15:39:57 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	taille(int n)
{
	int	longueur;

	longueur = 1;
	if (n < 0)
	{
		longueur++;
		n = -n;
	}
	while (n > 9)
	{
		n /= 10;
		longueur++;
	}
	return (longueur);
}

static char	*create_str(int longueur, int n, int moins, char *str)
{
	while (longueur >= 0)
	{
		str[longueur] = (n % 10) + 48;
		n /= 10;
		longueur--;
	}
	if (moins < 0)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		longueur;
	int		moins;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	moins = n;
	longueur = taille(n);
	str = (char *)malloc(sizeof(*str) * (longueur + 1));
	if (!str)
		return (NULL);
	str[longueur] = '\0';
	longueur--;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		n = -n;
	return (create_str(longueur, n, moins, str));
}
