/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:45:56 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/15 19:26:55 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	taille(int n) 
{ 
	int len; 

	len = 1; 
	if (n < 0) 
	{ 
		len++; 
		n = -n; 
	} 
	while (n > 9) 
	{ 
		n /= 10; 
		len++; 
	} 
	return (len); 
} 

char	*create_str(int len, int n, int neg, char *str) 
{ 
	while (len >= 0) 
	{ 
		str[len] = (n % 10) + 48; 
		n /= 10; 
		len--; 
	} 
	if (neg < 0) 
		str[0] = '-'; 
	return (str); 
} 

char	*ft_itoa(int n) 
{ 
	char	*str; 
	int	len; 
	int	neg; 

	if (n == -2147483648) 
		return (ft_strdup("-2147483648")); 
	neg = n; 
	len = taille(n); 
	str = (char *)malloc(sizeof(*str) * (len + 1)); 
	if (!str) 
		return (NULL); 
	str[len] = '\0'; 
	len--; 
	if (n == 0) 
	{ 
		str[0] = '0'; 
		return (str); 
	} 
	if (n < 0) 
		n = -n; 
	return (create_str(len, n, neg, str)); 
}
