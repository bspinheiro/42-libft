/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:09:31 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/09 15:19:46 by bda-silv         ###   ########.fr       */
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

int	t_isalnum(void)
{
	unsigned int	t;

	t = 0;
	printf("******** ft_isalnum \n");
	while (t < 256)
	{
		if (isalnum(t) != ft_isalnum(t))
			printf("ERR! (%d): %d-%d \n", t, isalnum(t), ft_isalnum(t));
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
	t_isalnum();
	return (0);
}
