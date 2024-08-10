/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:07:21 by amelniko          #+#    #+#             */
/*   Updated: 2024/08/03 12:28:49 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort_finished(t_stack *a)
{
	int	ind_stack;

	if (a->ind_top != a->size - 1)
		return (-1);
	ind_stack = a->ind_top;
	while (ind_stack >= 0)
	{
		if (a->arr[ind_stack].sort_ind != ind_stack)
			return (-1);
		ind_stack--;
	}
	return (0);
}
