/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 02:13:52 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 05:30:52 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n && src[i - 1])
		dest[i - 1] = src[i - 1];
	while (i++ < n)
		dest[i - 2] = '\0';
	return (dest);
}
