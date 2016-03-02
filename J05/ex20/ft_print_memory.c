/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:01:51 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 23:54:30 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void		ft_putnbr_base(int nbr, char *base)
{
	int		b;

	b = 0;
	while (base[b++])
		;
	if (b > 2)
	{
		if (nbr < 0)
			ft_putchar('-');
		if (nbr <= -b || b <= nbr)
			ft_putnbr_base(((nbr < 0) ? -(nbr / b) : nbr / b), base);
		ft_putchar((nbr > 0) ? base[nbr % b] : base[-(nbr % b)]);
	}
}

static void		ft_print_non_printable(char *str)
{
	if (31 < *str && *str < 127)
		ft_putchar(*str);
	else
		ft_putchar('.');
}

static int		ft_get_char(char *str)
{
	return (*str);
}

static int		ft_atoi_base(char *str, char *base)
{
	int		i;

	while (base[i++])
		;
	return (((*str / i) * 10) + (*str % i));
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*hexbase;

	i = 0;
	j = 0;
	hexbase = "0123456789abcdef";
	while (size > i && (i += 16))
	{
		j = 0x10000000;
		while ((long)addr < (j /= 16))
			ft_putchar('0');
		ft_putnbr_base((long)addr, hexbase);
		ft_putchar(':');
		ft_putchar(' ');
		j = 0;
		while (j++ < 16)
		{
			if ((i + j - 17) < size)
			{
				if (ft_get_char(addr + i + j - 17) < 16)
					ft_putchar('0');
				ft_putnbr_base(ft_atoi_base((addr + i + j - 17), "0123456789"), hexbase);
			}
			else
			{
				ft_putchar(' ');
				ft_putchar(' ');
			}
			if ((j + 1) % 2)
				ft_putchar(' ');
		}
		j = 0;
		while (j++ < 16 && ((i + j - 17) < size))
			ft_print_non_printable(addr + i + j - 17);
		ft_putchar('\n');
	}
	return (addr);
}
