/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:09:31 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 15:14:59 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	if (s == NULL)
		return (NULL);
	y = 0;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			y = i;
			return ((char*)&s[y]);
		}
		i--;
		y++;
	}
	return (NULL);
}
