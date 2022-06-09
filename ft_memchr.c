/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:02:33 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/09 14:39:53 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an 
	 unsigned char) in string s.

 RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
	 such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}
