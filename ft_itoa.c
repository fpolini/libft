/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:45:53 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/09 13:51:34 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		tall(int n)
{
	int	i;
	int	t;

	t = 0;
	i = 1;
	while ((unsigned int)(n / i) >= 1 && n != 0)
	{
		t = t + 1;
		i = i * 10;
	}
	if (n < 0 || n == 0)
		t = t + 1;
	return (t);
}

int		tall2(int n)
{
	int	i;

	i = 1;
	while ((unsigned int)(n / i) >= 1 && n != 0)
		i = i * 10;
	return (i / 10);
}

char	*mz(char *str, int n)
{
	str[tall(n)] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;

	j = tall(n) - 1;
	str = (char*)malloc(sizeof(char) * (tall(n) + 1));
	if (str == NULL)
		return (NULL);
	str = mz(str, n);
	if (n < 0)
		n = -n;
	while (j >= 0 && str[j] != '-' && n != 0)
	{
		str[j] = (n % 10) + 48;
		n = (n - (n % 10)) / 10;
		j = j - 1;
	}
	return (str);
}
