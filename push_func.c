/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:07:21 by amelniko          #+#    #+#             */
/*   Updated: 2024/08/03 12:07:25 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **from_b, t_stack **to_a)
{
	if ((*from_b)->ind_top < 0)
		return ;
	(*to_a)->arr[++(*to_a)->ind_top].num
		= (*from_b)->arr[(*from_b)->ind_top].num;
	(*to_a)->arr[(*to_a)->ind_top].sort_ind
		= (*from_b)->arr[(*from_b)->ind_top--].sort_ind;
	ft_printf("pa\n");
	return ;
}

void	pb(t_stack **from_a, t_stack **to_b)
{
	if ((*from_a)->ind_top < 0)
		return ;
	(*to_b)->arr[++(*to_b)->ind_top].num
		= (*from_a)->arr[(*from_a)->ind_top].num;
	(*to_b)->arr[(*to_b)->ind_top].sort_ind
		= (*from_a)->arr[(*from_a)->ind_top--].sort_ind;
	ft_printf("pb\n");
	return ;
}
