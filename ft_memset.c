/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:34:39 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/24 09:45:56 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     #include <string.h>

     void *
     memset(void *b, int c, size_t len);

DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string s.

RETURN VALUES
     The memset() function returns its first argument.
*/

void	*ft_memset(void *s, int c, unsigned int len)
{
	char	*str;
	int		i;

	str = s;
	i = 0;
	while ((unsigned int)i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
