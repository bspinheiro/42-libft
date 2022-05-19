/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:19:21 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/19 15:11:52 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is zero,
     bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset((char *)s, 0, n);
}
