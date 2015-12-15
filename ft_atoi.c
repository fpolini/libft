/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:16:37 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 16:49:36 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_range(int i, const char *str)
{
	int	j;
	int	t;

	t = 1;
	j = i;
	while (str[j] != '\0' && ft_isdigit(str[j]))
	{
		t = t * 10;
		j = j + 1;
	}
	return (t / 10);
}

int				ft_print(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' &&
			(str[i] == '0' ||
			str[i] == ' ' ||
			str[i] == '\n' ||
			str[i] == '\t' ||
			str[i] == '\r' ||
			str[i] == '\v' ||
			str[i] == '\f'))
		i = i + 1;
	return (i);
}

int				ft_zero(const char *str, int i)
{
	while (str[i] != '\0' && str[i] == '0')
		i = i + 1;
	return (i);
}

int				ft_plusmoins(const char *str, int i)
{
	if (str[i] == '+' || str[i] == '-')
		i = i + 1;
	return (i);
}

int				ft_atoi(const char *str)
{
	int				i;
 	int				nbr;
 	int				p;
	int				a;

	nbr = 0;
	i = ft_print(str);
	i = ft_plusmoins(str, i);
	a = i - 1;
	i = ft_zero(str, i);
	p = ft_range(i, str);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (nbr);
		else
		{
			nbr = nbr + (str[i] - 48) * p;
			p = p / 10;
			i = i + 1;
		}
	}
	if (str[a] == '-')
		nbr = -nbr;
	return (nbr);
}
