/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:52:37 by fkante            #+#    #+#             */
/*   Updated: 2019/07/15 15:08:30 by fkante           ###   ########.fr       */
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
	if (!(tmp = (char *)malloc(len1 + len2 + 1)))
		return (NULL);
	ft_strcpy(tmp, s1);
	ft_strcat(tmp, s2);
	tmp[len1 + len2] = '\0';
	return (tmp);
}
