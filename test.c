/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:43:12 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 17:02:29 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>

int		main()
{
	char c;
	char str[] = "hello\n";
	char ptr[] = "voi\n";
	int nbr;
	
	
	c = 'a';
	ft_putchar(c);
	ft_putstr(str);
	ft_putstr(ptr);
	ft_strcpy(str, ptr);
	ft_putstr(str);
	ft_strncpy(str, ptr, 2);
	ft_putstr(str);
	nbr = ft_strcmp("hell", "hello");
	printf("%d", nbr);
	printf("%d", ft_strlen("hello"));
	return (0);
}
