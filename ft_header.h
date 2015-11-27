/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:44:25 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 17:02:24 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef    FT_HEADER_H
#define    FT_HEADER_H

#include	<unistd.h>
#include	<stdlib.h>

void	ft_putchar(char c);
char	*ft_strcpy(char *dst, const char *src);
void	ft_putstr(char const *s);
char	*ft_strncpy(char *dst, const char *src, int n);
int		ft_strcmp(char *s1, const char *s2);
int		ft_strlen(const char *s);
void	ft_putnbr(int n);

#endif
