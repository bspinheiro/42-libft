/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:29:54 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/19 17:28:03 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIPTION
     The strchr() function locates the first occurrence of c (converted
     to a char) in the string pointed to by s.  The terminating null
     character is considered to be part of the string; therefore if c is
     `\0', the functions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates
     the last occurrence of c.

 RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	if (c == 0)
		return (ft_strchr(s, c));
	save = 0;
	while (*s != '\0')
	{
		if (*s == c)
			save = (char *)s;
		s++;
	}
	return (save);
}
