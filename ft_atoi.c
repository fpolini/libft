/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:16:37 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 10:48:48 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		p;

	i = (int)ft_strlen(str) - 1;
	p = 1;
	nbr = 0;
	while (i >= 0 && ft_isdigit(str[i]))
	{
		nbr = nbr + ((str[i] - 48) * p);
		i = i - 1;
		p = p * 10;
	}
	if (str[0] == '-')
		nbr = -nbr;
	return (nbr);
}
