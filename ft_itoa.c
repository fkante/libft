/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:24:25 by fkante            #+#    #+#             */
/*   Updated: 2019/04/24 19:55:38 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*swap(char *c)
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

static char		*fill_tmp(int i, int n, int size, char *tmp)
{
	while (i < size)
	{
		tmp[i++] = n % 10 + '0';
		n = n / 10;
	}
	tmp[i] = '\0';
	return (tmp);
}

static int		tmp_size(int n, int t)
{
	if (n > 9)
	{
		t++;
		return (tmp_size(n / 10, t));
	}
	return (t + 1);
}

char			*ft_itoa(int n)
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
		size = tmp_size(n, i) + 1;
		if (!(tmp = (char *)malloc(size + 1)))
			return (NULL);
		tmp[i++] = '-';
	}
	else
	{
		size = tmp_size(n, i);
		if (!(tmp = (char *)malloc(size + 1)))
			return (NULL);
	}
	tmp = fill_tmp(i, n, size, tmp);
	return (swap(tmp));
}
