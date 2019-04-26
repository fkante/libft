/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 08:50:26 by fkante            #+#    #+#             */
/*   Updated: 2019/04/26 09:08:25 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfindone(t_list *lst, size_t rank)
{
	t_list	*lst_found;
	size_t	i;

	lst_found = lst;
	i = 0;
	while (i < rank)
	{
		if (!lst_found)
			return (lst_found);
		lst_found = lst_found->next;
		i++;
	}
	return (lst_found);
}
