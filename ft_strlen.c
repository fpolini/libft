/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:13:29 by fpolini           #+#    #+#             */
/*   Updated: 2015/11/27 17:02:11 by fpolini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
