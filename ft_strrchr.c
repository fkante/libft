/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:09:31 by fkante            #+#    #+#             */
/*   Updated: 2019/04/21 17:18:33 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	if (s == NULL)
		return (NULL);
	if (c == 0)
		return ((char*)s + ft_strlen(s));
	y = 0;
	i = ft_strlen(s) + 1;
	while (i >= 0)
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
