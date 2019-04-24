/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:21:53 by fkante            #+#    #+#             */
/*   Updated: 2019/04/24 17:23:10 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ls_new;
	
	if (lst != NULL && f != NULL)
	{
		if (!(f(lst)))
			return (NULL);
		lst = lst->next;
		while (lst->next != NULL)
		{
			
		}
	}
	return (NULL);
}
