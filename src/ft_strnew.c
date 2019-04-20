/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 09:29:03 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 17:11:19 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	int		i;

	if (size == 0)
		return (NULL);
	i = 0;
	if (!(tmp = ft_memalloc(size)))
		return (NULL);
	while (i < size)
	{
		tmp[i] = '\0';
		i++;
	}
	return (tmp);
}
