/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:24:25 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 14:24:37 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_swap(char *c)
{
	int		i;
	int		y;
	char	t;

	i = 0;
	y = ft_strlen(c) - 1;
	if (c[i] == '-')
		i++;
	while (i < y)
	{
		t = c[i];
		c[i] = c[y];
		c[y] = t;
		i++;
		y--;
	}
	return (c);
}

int		ft_size(int n, int t)
{
	if (n > 9)
	{
		t++;
		return (ft_size(n / 10, t));
	}
	return (t + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*tmp;

	i = 0;
	if (n < 0)
	{
		n = -n;
		size = ft_size(n, i) + 1;
		tmp = ft_memalloc(size);
		tmp[i++] = '-';
	}
	else
	{
		size = ft_size(n, i);
		tmp = ft_memalloc(size);
	}
	while (i < size)
	{
		tmp[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	tmp[i] = '\0';
	return (ft_swap(tmp));
}
