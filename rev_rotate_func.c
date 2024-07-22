#include "push_swap.h"

void	rra(t_stack **a, int opt)
{
	int			ind;
	t_st_num	temp_bot;

	if ((*a)->ind_top < 1)
		return ;
	ind = 0;
	temp_bot.num = (*a)->arr[ind].num;
	temp_bot.sort_ind = (*a)->arr[ind].sort_ind;
	while (ind < (*a)->ind_top)
	{
		(*a)->arr[ind].num = (*a)->arr[ind + 1].num;
		(*a)->arr[ind].sort_ind = (*a)->arr[ind + 1].sort_ind;
		ind++;
	}
	(*a)->arr[ind].num = temp_bot.num;
	(*a)->arr[ind].sort_ind = temp_bot.sort_ind;
    if (opt == 1)
	{
        ft_printf("rra\n");
	}
	return ;
}

void	rrb(t_stack **b, int opt)
{
	int			ind;
	t_st_num	temp_bot;

	if ((*b)->ind_top < 1)
		return ;
	ind = 0;
	temp_bot.num = (*b)->arr[ind].num;
	temp_bot.sort_ind = (*b)->arr[ind].sort_ind;
	while (ind < (*b)->ind_top)
	{
		(*b)->arr[ind].num = (*b)->arr[ind + 1].num;
		(*b)->arr[ind].sort_ind = (*b)->arr[ind + 1].sort_ind;
		ind++;
	}
	(*b)->arr[ind].num = temp_bot.num;
	(*b)->arr[ind].sort_ind = temp_bot.sort_ind;
    if (opt == 1)
	{
        ft_printf("rrb\n");
	}
	return ;
}

void    rrr(t_stack **a, t_stack **b)
{
    rra(a, 2);
    rrb(b, 2);
    ft_printf("rrr\n");
    return ;
}