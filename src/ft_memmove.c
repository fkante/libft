/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:47:17 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 14:26:57 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*tmp;

	tmp = (char*)malloc(ft_strlen(src));
	i = 0;
	while (i < len)
	{
		((char*)tmp)[i] = ((const char*)src)[i];
		((char*)dst)[i] = ((const char*)src)[i];
		i++;
	}
	return (dst);
}
