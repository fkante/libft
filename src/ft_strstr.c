/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:58:11 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 15:15:40 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *pile, const char *pin)
{
	int i;
	int y;

	if (!pin || !pile)
		return (NULL);
	i = 0;
	y = 0;
	while (pile[i + y])
	{
		if (pile[i + y] == pin[y])
		{
			if (!pin[++y])
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
