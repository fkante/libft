/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:40:29 by fkante            #+#    #+#             */
/*   Updated: 2019/04/22 17:00:12 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while ((s1[i] == s2[i]) && i < n - 1)
	{
		i++;
		if (s1[i - 1] == '\0' || s2[i - 1] == '\0')
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
