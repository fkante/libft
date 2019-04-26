/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:27:05 by fkante            #+#    #+#             */
/*   Updated: 2019/04/26 09:05:04 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *one, void *two, size_t size)
{
	char	tmp;
	size_t	i;

	i = -1;
	while (++i < size)
	{
		tmp = *(char*)(one + i);
		*(char*)(one + i) = *(char*)(two + i);
		*(char*)(two + i) = tmp;
	}
}
