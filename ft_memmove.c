/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:41:59 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/09 14:40:22 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 SYNOPSIS
     #include <string.h>

     void *
     memmove(void *dst, const void *src, size_t len);

 DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.
	 The two strings may overlap; the copy is always done in a non-destructive
     manner.

 RETURN VALUES
     The memmove() function returns the original value of dst.

* If the buffers don't overlap, it doesn't matter what direction
* we copy in. If they do, it does, so just assume they always do.
* We don't concern ourselves with the possibility that the region
* to copy might roll over across the top of memory, because it's
* not going to happen.
*
* If the destination is above the source, we have to copy
* back to front to avoid overwriting the data we want to
* copy.
*
*      dest:       dddddddd
*      src:    ssssssss   ^
*              |   ^  |___|
*              |___|
*
* If the destination is below the source, we have to copy
* front to back.
*
*      dest:   dddddddd
*      src:    ^   ssssssss
*              |___|  ^   |
*                     |___|
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*_dst;
	const unsigned char	*_src;

	_dst = (unsigned char *)dst;
	_src = (unsigned char *)src;
	if (_dst <= _src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
		{
			*(_dst + len) = *(_src + len);
		}
	}
	return (dst);
}
