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

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ABS(Value) (((Value) >= 0) ? (Value) : -(Value))
# include "./libft/libft.h"
# include "./libft/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_st_num
{
	int			num;
	int			sort_ind;
}				t_st_num;

typedef struct s_stack
{
	int			ind_top;
	int			size;
	t_st_num	*arr;
}				t_stack;

//check_functions.c
int		is_sort_finished(t_stack *a);

//ending.c
void	error_mess(void);
void	free_stack(t_stack *stack);
void	free_arr(char **arr_args);

//initialization.c
char	**create_arr_args(int argc, char **argv);
t_stack	*create_stack(int argc, char **values);

//push_func.c
void	pa(t_stack **from_b, t_stack **to_a);
void	pb(t_stack **from_a, t_stack **to_b);

//rev_rotate_func.c
void	rra(t_stack **a, int opt);
void	rrb(t_stack **b, int opt);
void	rrr(t_stack **a, t_stack **b);

//rotate_func.c
void	ra(t_stack **a, int opt);
void	rb(t_stack **b, int opt);
void	rr(t_stack **a, t_stack **b);

//shadow_sorting.c
t_stack	*shadow_sorting(t_stack *a);

//solution.c
void	solution(t_stack *a, t_stack *b);

//sort_five.c
int		sort_stack_five_and_less(t_stack **a, t_stack **b);

//sort_many.c
int		sort_many_nums(t_stack **a, t_stack **b);

//sort_three.c
int		sort_stack_three_and_less(t_stack **a);

//swap_func.c
void	sa(t_stack **a, int opt);
void	sb(t_stack **b, int opt);
void	ss(t_stack **a, t_stack **b);

//valid_args.c
void	valid_args(int argc, char **argv);
#endif
