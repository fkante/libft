/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:56:50 by fkante            #+#    #+#             */
/*   Updated: 2019/04/22 17:11:23 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *tmp;

	if (size <= 0)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * size);
	while (size > 0)
	{
		tmp[size] = 0;
		size--;
	}
	tmp[0] = 0;
	return (tmp);
}
