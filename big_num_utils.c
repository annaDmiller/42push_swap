#include "push_swap.h"

int move_num_chunk_to_top(t_stack **a, int num_chunk, int size_chunk)
{
    int num_bot;
    int num_top;

    num_bot = find_num_chunk_from_bot(a, num_chunk, size_chunk);
    num_top = find_num_chunk_from_top(a, num_chunk, size_chunk);
    if (num_bot + 1 < (*a)->ind_top - num_top)
        return (num_bot + 1);
    else
        return (-((*a)->ind_top - num_top));
}

int check_num_in_b(t_stack **a, t_stack **b, int steps_a)
{
    int num_to_push;
    int ind_close;

    if ((*b)->ind_top < 0)
        return (0);
    if (steps_a > 0)
        num_to_push = (*a)->arr[steps_a - 1].sort_ind;
    else
        num_to_push = (*a)->arr[(*a)->ind_top + steps_a].sort_ind;
    ind_close = closest_num_to_found(b, num_to_push);
    if (ind_close >= (*b)->ind_top / 2)
        return (-((*b)->ind_top - ind_close));
    else
        return (ind_close + 1);
}

void    sort_chunk_in_b(t_stack **b)
{
    int min_b;
    int ind_b;
    int min_ind;

    if (!is_b_sorted(b))
        return ;
    ind_b = (*b)->ind_top - 1;
    min_b = (*b)->arr[(*b)->ind_top].sort_ind;
    min_ind = (*b)->ind_top;
    while (ind_b >= 0)
    {
        if (min_b > (*b)->arr[ind_b].sort_ind)
            min_ind = ind_b;
        min_b = min_of_two(min_b, (*b)->arr[ind_b].sort_ind);
        ind_b--;
    }
    if (min_ind >= (*b)->ind_top / 2)
        while (min_ind++ != (*b)->ind_top)
            rb(b, 1);
    if (min_ind < (*b)->ind_top / 2)
        while (min_ind-- >= 0)
            rrb(b, 1);
    return ;
}

int closest_num_to_found(t_stack **b, int num_to_push)
{
    int ind_ret;
    int ind_b;
    int ret;

    ind_b = (*b)->ind_top;
    ret = ABS(num_to_push - (*b)->arr[ind_b].sort_ind);
    ind_ret = ind_b;
    while (--ind_b >= 0)
    {
        if (ret > ABS(num_to_push - (*b)->arr[ind_b].sort_ind))
        {
            ret = ABS(num_to_push - (*b)->arr[ind_b].sort_ind);
            ind_ret = ind_b;
        }
    }
    if (num_to_push - (*b)->arr[ind_ret].sort_ind > 0)
    {
        if (ind_ret == 0)
            return ((*b)->ind_top);
        return (ind_ret - 1);
    }
    return (ind_ret);
}