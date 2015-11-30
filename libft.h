/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 18:08:48 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/30 20:14:33 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    LIBFT_H
#define    LIBFT_H

#include	<unistd.h>
#include	<stdlib.h>
#include	<string.h>

void	ft_strclr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
char	*ft_strcpy(char *dst, const char *src);
void	ft_putstr(char const *s);
char	*ft_strncpy(char *dst, const char *src, size_t in);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
int		ft_strlcat(char *s1, char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strndup(const char *s1, size_t n);
void	bzero(void *s, size_t n);
char	*ft_strnew(size_t size);
void	*ft_mempy(void *dst, const void *src, size_t n);
int		ft_atoi(const char *str);
#endif
