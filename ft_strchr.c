/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 06:52:57 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/19 16:15:34 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
DESCRIPTION
  The strchr() function locates the first occurrence of c (converted to a char)
  in the string pointed to by s.  The terminating null character is considered
  to be part of the string; therefore if c is `\0', the functions locate the
  terminating `\0'.

  The strrchr() function is identical to strchr(), except it locates the last
  occurrence of c.

RETURN VALUES
  The functions strchr() and strrchr() return a pointer to the located charac-
  ter, or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
