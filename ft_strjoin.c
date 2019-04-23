/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:52:37 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 17:09:50 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tmp = ft_memalloc(len1 + len2 + 1);
	while (i < len1)
	{
		tmp[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		tmp[i] = s2[i - len1];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
