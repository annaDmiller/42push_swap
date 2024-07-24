#include "push_swap.h"

int sort_stack_many_nums(t_stack **a, t_stack **b)
{
    static int  num_chunk;
    int         sorted_num;
    int         steps_a;
    int         steps_b;

    if (!is_sort_finished(*a))
        return (0);
    sorted_num = 0;
    while (sorted_num != 10)
    {
        steps_a = move_num_chunk_to_top(a, num_chunk);
        steps_b = check_num_in_b(a, b, steps_a);
        exec_steps_to_move_to_b(a, b, steps_a, steps_b);
        for (int ind = (*b)->ind_top; ind >= 0; ind--)
            ft_printf("%i\n", (*b)->arr[ind].sort_ind);
        ft_printf("\n");
        if (is_b_sorted(b))
            rb(b, 1);
        sorted_num++;
    }
    sort_chunk_in_b(b);
    while ((*b)->ind_top >= 0)
        pa(b, a);
    num_chunk++;
    if (num_chunk * 10 < (*a)->size)
        sort_stack_many_nums(a, b);
    return (1);
}

int move_num_chunk_to_top(t_stack **a, int num_chunk)
{
    int num_bot;
    int num_top;

    num_bot = find_num_chunk_from_bot(a, num_chunk);
    num_top = find_num_chunk_from_top(a, num_chunk);
    if (num_bot + 1 < (*a)->ind_top - num_top)
        return (num_bot + 1);
    else
        return (-((*a)->ind_top - num_top));
}

int check_num_in_b(t_stack **a, t_stack **b, int steps_a)
{
    int num_to_push;
    int ind_b;

    if ((*b)->ind_top < 0)
        return (0);
    if (steps_a > 0)
        num_to_push = (*a)->arr[steps_a - 1].sort_ind;
    else
        num_to_push = (*a)->arr[(*a)->ind_top + steps_a].sort_ind;
    ft_printf("num_to_push - %i\n", num_to_push);
    ind_b = (*b)->ind_top;
    while (ind_b >= 0)
    {
        if (num_to_push < (*b)->arr[ind_b].sort_ind)
            break ;
        ind_b--;
    }
    if (ind_b == (*b)->ind_top)
        return (0);
    if (ind_b >= (*b)->ind_top / 2)
        return (-((*b)->ind_top - ind_b));
    else
        return (ind_b + 1);
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