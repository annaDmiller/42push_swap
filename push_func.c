#include "push_swap.h"

void	pa(t_stack **from_b, t_stack **to_a)
{
	if ((*from_b)->ind_top < 0)
		return ;
	(*to_a)->arr[++(*to_a)->ind_top].num = (*from_b)->arr[(*from_b)->ind_top].num;
	(*to_a)->arr[(*to_a)->ind_top].sort_ind = (*from_b)->arr[(*from_b)->ind_top--].sort_ind;
    ft_printf("pa\n");
	return ;
}

void	pb(t_stack **from_a, t_stack **to_b)
{
	if ((*from_a)->ind_top < 0)
		return ;
	(*to_b)->arr[++(*to_b)->ind_top].num = (*from_a)->arr[(*from_a)->ind_top].num;
	(*to_b)->arr[(*to_b)->ind_top].sort_ind = (*from_a)->arr[(*from_a)->ind_top--].sort_ind;
    ft_printf("pb\n");
	return ;
}
