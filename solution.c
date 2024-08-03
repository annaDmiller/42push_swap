/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:07:21 by amelniko          #+#    #+#             */
/*   Updated: 2024/08/03 12:54:25 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solution(t_stack *a, t_stack *b)
{
	a = shadow_sorting(a);
	if (!a)
	{
		free_stack(a);
		free_stack(b);
		error_mess();
	}
	if (!is_sort_finished(a))
		return ;
	if (a->size <= 3)
		sort_stack_three_and_less(&a);
	if (a->size <= 5)
		sort_stack_five_and_less(&a, &b);
	else if (a->size > 5)
		sort_many_nums(&a, &b);
	return ;
}
