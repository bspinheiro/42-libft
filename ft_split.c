/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:39:37 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/15 13:15:44 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
/*  	int	i;
	int	j;
	int	k;
	char	*str;

	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c)
			i++;
		if (j != i)
			str[k++] = ft_substr(s, j, i - j);
	}
	return (str);
*/ 
    if (!s || !c)
		return (NULL);
	return (0);
}
