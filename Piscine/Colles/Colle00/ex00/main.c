/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 05:26:45 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 11:03:07 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		main(void)
{
	ft_putstr("colle(5, 3)\n\n");
	colle(5, 3);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(5, 1)\n\n");
	colle(5, 1);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(1, 1)\n\n");
	colle(1, 1);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(1, 5)\n\n");
	colle(1, 5);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(4, 4)\n\n");
	colle(4, 4);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(0, 4)\n\n");
	colle(0, 4);
	ft_putstr("\n\n/////////////////////////////////////\n\n\ncolle(4, 0)\n\n");
	colle(4, 0);
	ft_putstr("\n\n///////////////////////////////////\n\n\ncolle(42, 25)\n\n");
	colle(42, 25);
	return (0);
}