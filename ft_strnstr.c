/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:50:24 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/09 14:42:50 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated
     string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of
     both strings.

     The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

     While the strcasestr() function uses the current locale, the
     strcasestr_l() function may be passed a locale directly. See xlocale(3)
     for more information.

   RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned. */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	n_needle;

	n_needle = ft_strlen((char *)needle);
	if (!*needle)
		return ((char *)hay);
	i = 0;
	while (*hay && i < n)
	{
		if ((ft_strncmp(hay, needle, n_needle) == 0) && (i + n_needle <= n))
			return ((char *)hay);
		hay++;
		i++;
	}
	return (0);
}
