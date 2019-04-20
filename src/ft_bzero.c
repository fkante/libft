/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:35:24 by fkante            #+#    #+#             */
/*   Updated: 2019/04/20 12:59:30 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (!n)
	{
		((char*)s)[n] = '\0';
		n--;
	}
	((char*)s)[n] = '\0';
}
