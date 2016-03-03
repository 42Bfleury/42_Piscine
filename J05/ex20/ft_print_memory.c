/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:01:51 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/03 07:21:15 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static void		ft_putnbr_base(int nbr, char *base)
{
	int		b;

	b = 0;
	while (base[b++])
		;
	if (--b > 2)
	{
		if (nbr <= -b || b <= nbr)
			ft_putnbr_base(((nbr < 0) ? -(nbr / b) : nbr / b), base);
		ft_putchar((nbr > 0) ? base[nbr % b] : base[0]);
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

static void		ft_putstr(char *str)
{
	while (*str++)
		ft_putchar(*(str - 1));
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	void			*k;
	char			l;

	i = 0;
	while (size > i && (i += 16) && (j = 0x10000000))
	{
		while ((long)addr < (j /= 16))
			ft_putchar('0');
		ft_putnbr_base((long)(addr + i - 16), "0123456789abcdef");
		ft_putstr((j = 0) ? ": " : ": ");
		while (j++ < 16  || (j = 0))
		{
			k = addr + i + j  -17;
			ft_putstr((-16 < (l = ft_get_char(k)) && l < 16) ? "0" : "");
			ft_putnbr_base(ft_get_char(k), (k < (addr + size)) ? "0123456789abcdef" : "");
			ft_putstr((k < (addr + size)) ? "" : " ");
			ft_putstr(((j + 1) % 2) ? " " : "");
		}
		while (j++ < 16 && ((k = (addr + i + j - 17)) < (addr + size)))
			ft_print_non_printable(k);
		ft_putchar('\n');
	}
	return (addr);
}
