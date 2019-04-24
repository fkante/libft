/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:24:25 by fkante            #+#    #+#             */
/*   Updated: 2019/04/24 15:12:27 by fkante           ###   ########.fr       */
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

char	*ft_fill_tmp(int i, int n, int size, char *tmp)
{
	while (i < size)
	{
		tmp[i++] = n % 10 + '0';
		n = n / 10;
	}
	tmp[i] = '\0';
	return (tmp);
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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	if (n < 0)
	{
		n = -n;
		size = ft_size(n, i) + 1;
		if (!(tmp = ft_memalloc(size)))
			return (NULL);
		tmp[i++] = '-';
	}
	else
	{
		size = ft_size(n, i);
		if (!(tmp = ft_memalloc(size)))
			return (NULL);
	}
	tmp = ft_fill_tmp(i, n, size, tmp);
	return (ft_swap(tmp));
}
