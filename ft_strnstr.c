/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:35:13 by fkante            #+#    #+#             */
/*   Updated: 2019/04/23 10:03:08 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *pile, const char *needle, size_t len)
{
	size_t i;

	if (*needle == '\0')
		return ((char*)pile);
	if (len == 0)
		return (NULL);
	while (len > 0 && *pile)
	{
		i = 0;
		while (pile[i] == needle[i] && i < len && pile[i] && needle[i])
			i++;
		if (!needle[i])
			return ((char*)pile);
		len--;
		pile++;
	}
	return (NULL);
}
