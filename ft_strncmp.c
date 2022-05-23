/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 07:33:44 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/23 09:38:46 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the
	 null-terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.
	 Because strncmp() is designed for comparing strings rather than binary data
	 , characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal
	 to, or less than 0, according as the string s1 is greater than, equal to, 
	 or less than the string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
