/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:21:53 by fkante            #+#    #+#             */
/*   Updated: 2019/04/24 15:19:56 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lst_len(t_list *lst)
{
	size_t i;
	
	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}


t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	size_t lst_len;

	lst_len = ft_lst_len(lst);
	return (0);
}
