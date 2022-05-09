/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:09:31 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/09 14:52:42 by bda-silv         ###   ########.fr       */
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
	printf("******** DONE! \n\n");
	return (0);
}

int	t_isdigit(void)
{
	unsigned int	t;

	t = 0;
	printf("******** ft_isdigit \n");
	while (t < 256)
	{
		if (isdigit(t) != ft_isdigit(t))
			printf("ERR! (%d): %d-%d \n", t, isdigit(t), ft_isdigit(t));
		t++;
	}
	printf("******** DONE! \n\n");
	return (0);
}

int	main(void)
{
	printf("\n");
	t_isalpha();
	t_isdigit();
	return (0);
}
