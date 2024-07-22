/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:02:30 by amelniko          #+#    #+#             */
/*   Updated: 2024/07/19 13:02:33 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**all_args;
	int		num_args;

//	int argc = 2;
//	char *argv[] = {"./a.out", "2 0 3 1"};
	if (argc == 1)
		return (0);
	num_args = -1;
	all_args = create_arr_args(argc, argv);
	while (all_args[++num_args]);
	valid_args(num_args, all_args);
	a = create_stack(num_args, all_args);
	b = create_stack(num_args, NULL);
	free_arr(all_args);
	if (!b || !a)
	{
		free_stack(b);
		free_stack(a);
		error_mess();
	}
	solution(a, b);
/*	for (int i = a->ind_top; i >= 0; i--)
	{
		ft_printf("%i - %i\n", a->arr[i].num, a->arr[i].sort_ind);
	}*/
	return (free_stack(b), free_stack(a), 0);
}
