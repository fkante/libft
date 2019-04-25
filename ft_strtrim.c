/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:44:43 by fkante            #+#    #+#             */
/*   Updated: 2019/04/25 10:22:07 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		i;
	char	*trim_out;

	if (s == NULL)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s) - 1;
	if (!(trim_out = (char *)malloc(end + 1)))
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	while (start <= end)
	{
		trim_out[i] = s[start];
		i++;
		start++;
	}
	trim_out[i] = '\0';
	return (trim_out);
}
