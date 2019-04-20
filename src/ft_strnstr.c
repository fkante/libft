/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:35:13 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 15:14:45 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *pile, const char *needle, size_t len)
{
	int i;
	int y;
	
	if (!pile || !needle)
		return (NULL);
	if (!len)
		return ((char*)pile);
	i = 0;
	y = 0;
	while (pile[i + y] && i < len)
	{
		if (pile[i + y] == needle[y])
		{
			if (!needle[++y])
				return ((char*)pile + i);
		}
		else
		{
			y = 0;
			i++;
		}
	}
	return (NULL);
}
