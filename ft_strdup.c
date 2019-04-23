/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:06:58 by fkante            #+#    #+#             */
/*   Updated: 2019/04/21 15:47:36 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;

	if (!(dst = ft_memalloc(ft_strlen(src))))
		return (NULL);
	dst = ft_strcpy(dst, src);
	return (dst);
}
