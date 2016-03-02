/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:50:13 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 06:03:57 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *s1, char *s2)
{
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strcmp(s1, s2) => %i\n", ft_strcmp(s1, s2));
	printf("strcmp(s1, s2)    => %i\n", strcmp(s1, s2));
}

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello World";
	s2 = "Hello World";
	test(s1, s2);
	printf("________________________________________\n\n");
	s1 = "hello world";
	s2 = "Hello World";
	test(s1, s2);
	printf("________________________________________\n\n");
	s1 = "Hello World";
	s2 = "hello world";
	test(s1, s2);
	printf("________________________________________\n\n");
	s1 = "Hello World.";
	s2 = "Hello World";
	test(s1, s2);
	printf("________________________________________\n\n");
	s1 = "Hello World";
	s2 = "Hello World.";
	test(s1, s2);
	return (0);
}
