/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:15:54 by fkante            #+#    #+#             */
/*   Updated: 2020/05/18 23:31:14 by francis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*ret;
	char	*tmp;
	size_t	i;

	i = 0;
	ret = NULL;
	tmp = (char*)s;
	while (i < n)
	{
		if (((unsigned char*)tmp)[i] == (unsigned char)c)
		{
			ret = ((void*)tmp + i);
			break ;
		}
		i++;
	}
	return (ret);
}
