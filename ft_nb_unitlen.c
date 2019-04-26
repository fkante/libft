/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_unitlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 08:57:55 by fkante            #+#    #+#             */
/*   Updated: 2019/04/26 09:06:10 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_unitlen(intmax_t n, size_t base)
{
	size_t		length;
	uintmax_t	nb;

	if (n == 0)
		return (1);
	length = 0;
	if (n < 0)
	{
		nb = -n;
		length++;
	}
	else
		nb = n;
	if (base == 0)
		base = 10;
	while (nb != 0)
	{
		nb /= base;
		length++;
	}
	return (length);
}
