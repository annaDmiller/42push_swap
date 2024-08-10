/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:07:21 by amelniko          #+#    #+#             */
/*   Updated: 2024/08/03 12:29:35 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_mess(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	free_stack(t_stack *stack)
{
	if (stack)
		free(stack->arr);
	free(stack);
}

void	free_arr(char **arr_args)
{
	int	ind_s;

	ind_s = -1;
	while (arr_args[++ind_s])
		free(arr_args[ind_s]);
	free(arr_args);
}
