/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:15:54 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 14:25:31 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c ,size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((const char*)s)[i] == (unsigned char)c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
