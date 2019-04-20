/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:16:40 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 15:19:52 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int y;
	int i;

	y = 0;
	i = ft_strlen(s1);
	while (s2[y] || y < n)
	{
		s1[i] = s2[y];
		y++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}