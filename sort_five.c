#include "push_swap.h"

int    sort_stack_five_and_less(t_stack **a, t_stack **b)
{
    int ind_search;
    int ind;

    if (!is_sort_finished(*a))
        return (0);
    ind = (*a)->ind_top;
    while (ind > 2)
    {
        ind_search = find_num_to_b(a, ind--);
        move_to_top_num(a, ind_search);
        pb(a, b);
    }
    sort_stack_three_and_less(a);
    while ((*a)->ind_top != (*a)->size - 1)
        pa(b, a);
    return (0);
}

int find_num_to_b(t_stack **a, int ind_to_search)
{
    int ind;

    ind = (*a)->ind_top;
    while (ind >= 0)
    {
        if ((*a)->arr[ind].sort_ind == ind_to_search)
            return (ind);
        ind--;
    }
    return (-1);
}

void    move_to_top_num(t_stack **a, int ind_search)
{
    if (ind_search == (*a)->ind_top)
        return ;
    if (ind_search >= (*a)-> size / 2)
    {
        ra(a, 1);
        move_to_top_num(a, ++ind_search);
    }
    else
    {
        rra(a, 1);
        if (ind_search == 0)
            move_to_top_num(a, (*a)->ind_top);
        else
            move_to_top_num(a, --ind_search);
    }
    return ;
}