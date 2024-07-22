#include "push_swap.h"

void    sa(t_stack **a, int opt)
{
	t_st_num	temp;
	
	if ((*a)->ind_top < 1)
		return ;
	temp.num =  ((*a)->arr[(*a)->ind_top]).num;
	temp.sort_ind = ((*a)->arr[(*a)->ind_top]).sort_ind;
	(*a)->arr[(*a)->ind_top].num = (*a)->arr[(*a)->ind_top - 1].num;
	(*a)->arr[(*a)->ind_top].sort_ind = (*a)->arr[(*a)->ind_top - 1].sort_ind;
	(*a)->arr[(*a)->ind_top - 1].num = temp.num;
	(*a)->arr[(*a)->ind_top - 1].sort_ind = temp.sort_ind;
    if (opt == 1)
        ft_printf("sa\n");
    return ;
}

void	sb(t_stack **b, int opt)
{
	t_st_num	temp;
	
	if ((*b)->ind_top < 1)
		return ;
	temp.num =  ((*b)->arr[(*b)->ind_top]).num;
	temp.sort_ind = ((*b)->arr[(*b)->ind_top]).sort_ind;
	(*b)->arr[(*b)->ind_top].num = (*b)->arr[(*b)->ind_top - 1].num;
	(*b)->arr[(*b)->ind_top].sort_ind = (*b)->arr[(*b)->ind_top - 1].sort_ind;
	(*b)->arr[(*b)->ind_top - 1].num = temp.num;
	(*b)->arr[(*b)->ind_top - 1].sort_ind = temp.sort_ind;
    if (opt == 1)
        ft_printf("sb\n");
    return ;
}

void    ss(t_stack **a, t_stack **b)
{
    sa(a, 2);
    sb(b, 2);
    ft_printf("ss\n");
    return ;
}