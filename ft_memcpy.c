/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:31:37 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/23 15:41:27 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory 
	 area dst.  If dst and src overlap, behavior is undefined.  Applications in
	 which dst and src might overlap should use memmove(3) instead.

 RETURN VALUES
     The memcpy() function returns the original value of dst.


#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	char *_dst = (char *)dst;
	char *_src = (char *)src;
	while (n--)
	{
		*_dst++ = *_src++;
		printf("%i \n", *_dst);
	}

	return (_dst);
}

*/

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (((char *)dst) == ((char *)src) && n > 0)
		return (0);
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		return (dst);
	}
}
