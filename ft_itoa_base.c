/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 00:37:29 by bda-silv          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/04 09:52:24 by bda-silv         ###   ########.fr       */
=======
/*   Updated: 2022/06/30 00:39:20 by bda-silv         ###   ########.fr       */
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_itoa_base(unsigned int n, unsigned int base)
{
	char		*b;
	int			len;
	char		*str;
=======
char	*ft_itoa_base(int n, int base)
{
	char	*b;
	int		len;
	char	*str;
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8

	if (base <= 0)
		return (NULL);
	len = ft_nbrlen(n, base);
<<<<<<< HEAD
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	b = ft_substr("0123456789abcdefghijklmnopqrstuvwxyz", 0, base);
=======
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	b = ft_substr("0123456789abcdefghijklmnopqrstuvwxyz", 0, base - 1);
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8
	if (!b)
		return (NULL);
	if (n == 0)
		str[0] = b[0];
	while (len > 0)
	{
		str[--len] = b[n % base];
		n /= base;
	}
<<<<<<< HEAD
	if (b)
		free(b);
=======
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8
	return (str);
}
