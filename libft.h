/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:37:45 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/24 09:16:58 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: corrigir strchr e strrchr;

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *s, int c, unsigned int len);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);

#endif
