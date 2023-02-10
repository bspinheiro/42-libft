/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:42:18 by bda-silv          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/04 09:24:21 by bda-silv         ###   ########.fr       */
=======
/*   Updated: 2022/06/30 00:37:03 by bda-silv         ###   ########.fr       */
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		l;
	char		*str;

	nb = n;
<<<<<<< HEAD
	l = ft_dc(nb) - 1;
	str = ft_calloc(ft_dc(nb) + 1, sizeof(char));
=======
	l = ft_nbrlen(n, 10) - 1;
	str = ft_calloc(ft_nbrlen(n, 10) + 1, sizeof(char));
>>>>>>> 4abe30c9b654544c3139b4d254c51e3f0a0fd7e8
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb != 0)
	{
		str[l--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
