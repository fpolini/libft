/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:16:37 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/30 19:42:48 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_exp(int a, int p)
{
	int exp;
	
	exp = a;
	while (p > 1)
	{
		exp = exp * a;
		p = p - 1;
	}
	return (exp);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		p;

	i  = (int)ft_strlen(str) - 1;
	p = 0;
	//printf("%d", i);
	nbr = 0;
	printf("%d", ft_isdigit(str[i]));
	while (i >= 0)
	{
		if (ft_isdigit(str[i]) == 1)
			nbr = nbr + (str[i] - 48) * ft_exp(10, p);
		printf("%d", nbr);
		if (i == 0 && str[i] == '-')
			nbr = -nbr;
		else
			return (nbr);
		i = i + 1;
		p = p + 1;
	}
	return (nbr);
}
