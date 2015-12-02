/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:43:12 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/02 18:45:06 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	const char str[] = "hell";
	const char ptr[] = "hell";
	
//	ft_putstr(ft_strcpy(str, ptr));
//	ft_putchar('\n');
//	ft_putstr(strcpy(str, ptr));
	if (ft_strnequ(str, ptr, 6))
		ft_putstr("true");
	else
		ft_putstr("false");
	return (0);
}

