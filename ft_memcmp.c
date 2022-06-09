/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:58:22 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/09 14:26:12 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.

 RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
	 otherwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that `\200' is greater than `\0', for
	 example).  Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
	 the returned value.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
