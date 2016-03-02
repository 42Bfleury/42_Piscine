/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 23:54:13 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 00:18:28 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	g_str1[] = "a";
char	g_str2[] = "ab";
char	g_str3[] = "abc";
char	g_str4[] = "abcd";
char	g_str5[] = "abcde";
char	g_str6[] = "abcdef";
char	g_str7[] = "abcdefg";
char	g_str8[] = "abcdefgh";
char	g_str9[] = "abcdefghi";

int		main(void)
{
	printf("ft_strrev(%s) => ", g_str1);
	printf("%s\n", ft_strrev(g_str1));
	printf("ft_strrev(%s) => ", g_str2);
	printf("%s\n", ft_strrev(g_str2));
	printf("ft_strrev(%s) => ", g_str3);
	printf("%s\n", ft_strrev(g_str3));
	printf("ft_strrev(%s) => ", g_str4);
	printf("%s\n", ft_strrev(g_str4));
	printf("ft_strrev(%s) => ", g_str5);
	printf("%s\n", ft_strrev(g_str5));
	printf("ft_strrev(%s) => ", g_str6);
	printf("%s\n", ft_strrev(g_str6));
	printf("ft_strrev(%s) => ", g_str7);
	printf("%s\n", ft_strrev(g_str7));
	printf("ft_strrev(%s) => ", g_str8);
	printf("%s\n", ft_strrev(g_str8));
	printf("ft_strrev(%s) => ", g_str9);
	printf("%s\n", ft_strrev(g_str9));
	return (0);
}
