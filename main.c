/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-silv <bda-silv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:09:31 by bda-silv          #+#    #+#             */
/*   Updated: 2022/05/23 15:49:18 by bda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include "libft.h"

void prt(char s[16], const int a);
void rgen(char *r, const int len);
int wgen(void);

int	t_isalpha(void);
int	t_isdigit(void);
int	t_isalnum(void);
int	t_isascii(void);
int	t_isprint(void);
int	t_toupper(void);
int	t_tolower(void);
int	t_strchr(void);
int	t_strlen(void);
int	t_memcpy(void);

int	main(void) {
	prt("  ",2);
	t_isalpha();
	t_isdigit();
	t_isalnum();
	t_isascii();
	t_isprint();
	t_toupper();
	t_tolower();
	t_strchr();
	t_strlen();
	return (0);
}

void prt(char s[16], const int a) {
	if (a == 0)
		printf("******** %s \n", s);
	else if (a == 1)
		printf("******** DONE! \n\n");
	else
		printf("%s \n", s);
}

void rgen(char *r, const int len) {
	static const char charset[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789~!@#$^&_";
	srand(time(NULL));
	for (int i = 0; i < len; ++i) {
		r[i] = (char)charset[rand() % sizeof(charset) - 1];
	}
	printf("%lu", sizeof(charset));
	r[len] = 0;
}

int wgen(void) {
	srand(time(NULL));
	return rand() % 256;
}

int	t_isalpha(void)
{
	unsigned int	t;

	t = 0;
	prt("ft_isalpha", 0);
	while (t < 256)
	{
		if (isalpha(t) != ft_isalpha(t))
			printf("ERR! (%d): %d-%d \n", t, isalpha(t), ft_isalpha(t));
		t++;
	}
	prt("", 1);
	return (0);
}

int	t_isdigit(void)
{
	unsigned int	t;

	t = 0;
	prt("ft_isdigit", 0);
	while (t < 256)
	{
		if (isdigit(t) != ft_isdigit(t))
			printf("ERR! (%d): %d-%d \n", t, isdigit(t), ft_isdigit(t));
		t++;
	}
	prt("", 1);
	return (0);
}

int	t_isalnum(void)
{
	unsigned int	t;

	t = 0;
	prt("ft_isalnum", 0);
	while (t < 256)
	{
		if (isalnum(t) != ft_isalnum(t))
			printf("ERR! (%d): %d-%d \n", t, isalnum(t), ft_isalnum(t));
		t++;
	}
	prt("", 1);
	return (0);
}

int	t_isascii(void)
{
	unsigned int	t;

	t = 0;
	prt("ft_isascii", 0);
	while (t < 256)
	{
		if (isascii(t) != ft_isascii(t))
			printf("ERR! (%d): %d-%d \n", t, isascii(t), ft_isascii(t));
	t++;
	}
	prt("", 1);
	return (0);
}

int	t_isprint(void)
{
	unsigned int	t;

	t = 0;
	prt("ft_isprint", 0);
	while (t < 256)
	{
		if (isprint(t) != ft_isprint(t))
			printf("ERR! (%d): %d-%d \n", t, isprint(t), ft_isprint(t));
	t++;
	}
	prt("", 1);
	return (0);
}

int	t_toupper(void)
{
	unsigned int t;

	t = 0;
	prt("ft_toupper", 0);
	while (t < 256)
	{
		if (toupper(t) != ft_toupper(t))
			printf("ERR! (%d): %d-%d \n", t, toupper(t), ft_toupper(t));
	t++;
	}
	prt("", 1);
	return (0);
}

int	t_tolower(void)
{
	unsigned int t;

	t = 0;
	prt("ft_tolower", 0);
	while (t < 256)
	{
		if (tolower(t) != ft_tolower(t))
			printf("ERR! (%d): %d-%d \n", t, tolower(t), ft_tolower(t));
	t++;
	}
	prt("", 1);
	return (0);
}

int	t_strchr(void)
{
	printf("%s", strchr("ghjUIKOL",'j'));
	return(0);
}

int	t_strlen(void)
{
	unsigned int	n1, n2;
	unsigned int	t_n1, t_n2;
	char r[] = " ";
	int k = wgen();

	rgen(r,k);
	printf("%s %d \n", r, k);

	t_n1 = ft_strlen(r);
	printf("%d \n", t_n1);

	n1 = strlen(r);
	printf("%d \n", n1);

	n2 = strlen("");
	t_n2 = ft_strlen("");

	prt("ft_strlen", 0);
	if (n1 != t_n1)
		printf(" ERR! %d - %d \n", n1, t_n1);
	if (n2 != t_n2)
		printf(" ERR! %d - %d \n", n2, t_n2);
	prt("",1);
	return (0);
}

int	t_memcpy(void)
{
	//const char *a = "test basic du memcpy !";
	//char b[22];
	
	//printf("%s", ft_memcpy(b, a, 22));
	return (0) ;
}


