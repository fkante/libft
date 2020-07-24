/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:41:29 by fkante            #+#    #+#             */
/*   Updated: 2020/05/21 21:45:45 by francis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "darray.h"
#include "libft.h"
#include "hashmap.h"

int8_t	darray_push(t_darray *array, void *element)
{
	int8_t	ret;

	ret = SUCCESS;
	if (array != NULL)
	{
		if ((array->end + 1) >= array->max)
			ret = darray_expand(array);
		if (ret == SUCCESS)
		{
			if (array->contents[array->end] != NULL || array->end > 0)
				array->end++;
			array->contents[array->end] = element;
		}
	}
	else
		ret = ft_perror_failure(ARRAY_IS_NULL, __FILE__, __LINE__);
	return (ret);
}
