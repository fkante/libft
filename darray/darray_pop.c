/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <fkante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:59:36 by fkante            #+#    #+#             */
/*   Updated: 2020/05/13 10:24:04 by francis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "darray.h"
#include "libft.h"

void	*darray_pop(t_darray *array)
{
	void	*element;

	element = NULL;
	if (array != NULL)
	{
		element = darray_remove(array, array->end);
		if (element != NULL)
		{
			if (array->end > 0)
				array->end--;
			if (array->end > array->expand_rate)
				darray_contract(array);
		}
	}
	else
		ft_perror_null(FAILED_TO_POP, __FILE__, __LINE__);
	return (element);
}
