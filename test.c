/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:43:12 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/29 21:07:43 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	char c;
	char str[] = "hello";
	char ptr[] = "mmmmmmmmmmmmm";
	char l[] = "rt";
	int nbr;
	int l1;
	int l2;
	int l3;

	c = 'z';
	l1 = 'A';
	l2 = ';';
	l3 = '9';
	
	
//	ft_putchar(ft_tolower(c));
	//printf("%d", ft_isalnum(l2));
	//printf("%d", ft_isalnum(l3));
	//printf("%d", ft_isdigit(l[0]));
	//printf("%d", ft_isdigit(l3));
	//printf("%d", ft_isalpha(c));
	//printf("%d", ft_isascii(164));
	//printf("%d", ft_isprint(32));
	//printf("%d", ft_isalpha(l2));
	//ft_putchar(c);
	//ft_putstr(ft_strcat(str, ptr));
	//ft_strncat(str, ptr, 3);
	//ft_strlcat(str, ptr, );
	//ft_putstr(str);
	//printf("%d", ft_strlcat(str, ptr, 7));
	//est ce aue la taille de retour doit avoir + 1 pour le nul
	//ft_putstr(ptr);
	//ft_strcpy(str, ptr);
	//ft_putstr(str);
	//ft_strncpy(str, ptr, 2);
	//ft_putstr(str);
	//printf("%d", ft_strcmp("", ""));
	//printf("%d", ft_strncmp("maman", "mamanhello", 6));
	//printf("%d", nbr);
	//printf("%zu", ft_strlen("maman"));
	//ft_putstr(ft_strstr("nmama", "manhello"));
	//printf("%zu", ft_strlen("hello"));
	//ft_putstr(ft_strchr("he.llo.maman",056 ));
//	printf("%p", ft_memalloc(10));
	printf("%p", ft_memset("000", 3, 10));	
	return (0);
}
