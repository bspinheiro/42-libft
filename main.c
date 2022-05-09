/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:09:31 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/09 12:41:19 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	t_isalpha(void)
{
	unsigned int	t;

	t = 0;
	printf("******** ft_isalpha \n");
	while (t < 256)
	{
		if (isalpha(t) != ft_isalpha(t))
			printf("ERR! (%d): %d-%d \n", t, isalpha(t), ft_isalpha(t));
		t++;
	}
	printf("******** DONE!\n");
	return (0);
}

int	main(void)
{
	t_isalpha();
	return (0);
}
