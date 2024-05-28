#include "push_swap.h"

void	swap_stack(t_stack *stack)
{
	t_st_num	temp;
	
	if (stack->ind_top < 1)
		return ;
	temp.num =  (stack->arr[stack->ind_top]).num;
	temp.sort_ind = (stack->arr[stack->ind_top]).sort_ind;
	stack->arr[stack->ind_top].num = stack->arr[stack->ind_top - 1].num;
	stack->arr[stack->ind_top].sort_ind = stack->arr[stack->ind_top - 1].sort_ind;
	stack->arr[stack->ind_top - 1].num = temp.num;
	stack->arr[stack->ind_top - 1].sort_ind = temp.sort_ind;
	return ;
}

void	push_stack(t_stack *from, t_stack *to)
{
	if (from->ind_top < 0)
		return ;
	to->arr[++to->ind_top].num = from->arr[from->ind_top].num;
	to->arr[to->ind_top].sort_ind = from->arr[from->ind_top--].sort_ind;
	return ;
}

void	rev_rotate_stack(t_stack *stack)
{
	int			ind;
	t_st_num	temp_top;

	if (stack->ind_top < 1)
		return ;
	ind = stack->ind_top;
	temp_top.num = stack->arr[ind].num;
	temp_top.sort_ind = stack->arr[ind].sort_ind;
	while (ind > 0)
	{
		stack->arr[ind].num = stack->arr[ind - 1].num;
		stack->arr[ind].sort_ind = stack->arr[ind - 1].sort_ind;
		ind--;
	}
	stack->arr[ind].num = temp_top.num;
	stack->arr[ind].sort_ind = temp_top.sort_ind;	
	return ;
}

void	rotate_stack(t_stack *stack)
{
	int			ind;
	t_st_num	temp_bot;

	if (stack->ind_top < 1)
		return ;
	ind = 0;
	temp_bot.num = stack->arr[ind].num;
	temp_bot.sort_ind = stack->arr[ind].sort_ind;
	while (ind < stack->ind_top)
	{
		stack->arr[ind].num = stack->arr[ind + 1].num;
		stack->arr[ind].sort_ind = stack->arr[ind + 1].sort_ind;

		ind++;
	}
	stack->arr[ind].num = temp_bot.num;
	stack->arr[ind].sort_ind = temp_bot.sort_ind;
	return ;
}
