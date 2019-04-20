/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 10:35:22 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 16:05:49 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countchar(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int		ft_oneword(char const *s, char c, int t)
{
	int i;

	i = t;
	while (s[i] != c && s[i])
		i++;
	return (i - t);
}

char	*ft_nextword(char const *s, char c, int wordstart)
{
	int		i;
	char	*word;

	i = 0;
	word = ft_memalloc(ft_oneword(s, c, wordstart) * sizeof(char));
	while (s[wordstart] != c)
	{
		word[i] = s[wordstart];
		wordstart++;
		i++;
	}
	return (word);
}

int		ft_countword(char const *s, char c)
{
	int		count;
	int		i;
	int		state;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i + 1] == c)
			state = 0;
		else if (state == 0 || s[i + 1] == '\0')
		{
			state = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	int		state;
	char	**tmp;
	int		nb_word;
	int		nb_char;
	int		x;
	int		index;

	if (s == NULL || c == 0)
		return (NULL);
	nb_word = ft_countword(s, c);
	nb_char = ft_countchar(s, c);
	index = 0;
	x = 0;
	while (s[index] == c)
		index++;
	tmp = ft_memalloc(nb_char * sizeof(char**));
	while (nb_word--)
	{
		tmp[x] = ft_nextword(s, c, index);
		x++;
		while (s[index])
		{
			if (s[index] == c)
				state = 0;
			else if (state == 0)
			{
				state = 1;
				break ;
			}
			index++;
		}
	}
	return (tmp);
}
