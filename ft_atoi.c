/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:19:53 by bda-silv          #+#    #+#             */
/*   Updated: 2022/06/08 16:37:55 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 SYNOPSIS
     #include <stdlib.h>

     int
     atoi(const char *str);

     #include <xlocale.h>

     int
     atoi_l(const char *str, locale_t loc);

 DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
	 by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

 TODO:
 - Limites: -2.147.483.648 e +2.147.483.647
 - Quando passa dos limite positivo, o valor se torna negativo e vice-versa
 - Sinal + é desprezado - nao impresso.
 - sinal - é considerado.
 - no primeiro not number or signal, stops
	Prototipagem:

*/

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int		i;
	int		signal;
	int		number;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	signal = 1;
	if (str[i] == '-')
		signal = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	number = 0;
	while (ft_isdigit((int)str[i]))
		number = (number * 10) + (str[i++] - '0');
	return ((int)(number * signal));
}
