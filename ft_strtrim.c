/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:49:15 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/15 01:22:05 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	l = ft_strlen(s1);
	while (ft_strrchr(set, *(s1 + l - 1)))
		l--;
	return (ft_substr(s1, 0, l));
}
