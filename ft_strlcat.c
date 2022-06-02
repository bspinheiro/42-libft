/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 08:31:45 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/02 14:46:24 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	i = 0;
	while (dst[i] && i < dstlen)
	{
		i++;
	}
	j = 0;
	while (*src && (i + j + 1) < dstlen)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstlen)
		dst[i + j] = 0;
	return (i + ft_strlen((char *)src));
*/

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstlen)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(dst + i) && i < dstlen)
		i++;
	j = 0;
	while (*src && (i + j + 1) < dstlen)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	if (i < dstlen)
		*(dst + i + j) = 0;
	return (i + ft_strlen((char *)src));
}
