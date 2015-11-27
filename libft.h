/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:48 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 18:53:12 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    LIBFT_H
#define    LIBFT_H

#include	<unistd.h>
#include	<stdlib.h>

void	ft_putchar(char c);
char	*ft_strcpy(char *dst, const char *src);
void	ft_putstr(char const *s);
char	*ft_strncpy(char *dst, const char *src, unsigned long n);
int		ft_strcmp(char *s1, const char *s2);
unsigned long	ft_strlen(const char *s);
void	ft_putnbr(int n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, unsigned long n);
unsigned long	ft_strlcat(char *s1, char *s2, unsigned long n);

#endif
