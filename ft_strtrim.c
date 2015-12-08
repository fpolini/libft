/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:28:59 by fpolini           #+#    #+#             */
/*   Updated: 2015/12/08 14:59:18 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sup(const char *s)
{
	int		i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i = i + 1;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		j;
	int		i;
	int		k;

	k = 0;
	j = (int)ft_strlen(s);
	i = ft_sup(s);
	if (s[i] == '\0')
		return ("");
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j = j - 1;
	str = (char*)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < j)
		{
			str[k] = s[i];
			i = i + 1;
			k = k + 1;
		}
	}
	return (str);
}
