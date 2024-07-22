#include "push_swap.h"

void	ra(t_stack **a, int opt)
{
	int			ind;
	t_st_num	temp_top;

	if ((*a)->ind_top < 1)
		return ;
	ind = (*a)->ind_top;
	temp_top.num = (*a)->arr[ind].num;
	temp_top.sort_ind = (*a)->arr[ind].sort_ind;
	while (ind > 0)
	{
		(*a)->arr[ind].num = (*a)->arr[ind - 1].num;
		(*a)->arr[ind].sort_ind = (*a)->arr[ind - 1].sort_ind;
		ind--;
	}
	(*a)->arr[ind].num = temp_top.num;
	(*a)->arr[ind].sort_ind = temp_top.sort_ind;
    if (opt == 1)
	{
        ft_printf("ra\n");
	}
	return ;
}

void	rb(t_stack **b, int opt)
{
	int			ind;
	t_st_num	temp_top;

	if ((*b)->ind_top < 1)
		return ;
	ind = (*b)->ind_top;
	temp_top.num = (*b)->arr[ind].num;
	temp_top.sort_ind = (*b)->arr[ind].sort_ind;
	while (ind > 0)
	{
		(*b)->arr[ind].num = (*b)->arr[ind - 1].num;
		(*b)->arr[ind].sort_ind = (*b)->arr[ind - 1].sort_ind;
		ind--;
	}
	(*b)->arr[ind].num = temp_top.num;
	(*b)->arr[ind].sort_ind = temp_top.sort_ind;
    if (opt == 1)
	{
        ft_printf("rb\n");
	}
	return ;
}

void    rr(t_stack **a, t_stack **b)
{
    ra(a, 2);
    rb(b, 2);
    ft_printf("rr\n");
    return ;
}
