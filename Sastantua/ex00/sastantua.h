/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 21:07:02 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 17:46:50 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SASTANTUA_H
# define SASTANTUA_H
# include <unistd.h>

int		ft_putchar(char c);
int		get_nb_floor(int size);
int		get_step(int i0, int i1);
void	fill_sastantua(int size, int nb_floor, int nb_brick, int step);
void	sastantua(int size);

#endif
