#include "push_swap.h"

int sort_stack_many_nums(t_stack **a, t_stack **b)
{
    static int  num_chunk;
    int         sorted_num;

    if (!is_sort_finished(*a))
        return (0);
    sorted_num = 0;
    while (sorted_num != 20)
    {
        move_num_chunk_to_top(a, b, num_chunk);
        check_num_in_b(a, b);
        sorted_num++;
    }
    num_chunk++;
    return (1);
}

void    move_num_chunk_to_top(t_stack **a, t_stack **b, int num_chunk)
{
    int num_bot;
    int num_top;

    num_bot = find_num_chunk_from_bot(a, num_chunk);
    num_top = find_num_chunk_from_top(a, num_chunk);
    if (num_bot + 1 < (*a)->ind_top - num_top)
    {
        while (num_bot-- > 0)
            ra(a, 1);
        ra(a, 1);
    }
    else
    {
        while (num_top++ != (*a)->ind_top)
            rra(a, 1);
    }
    return ;
}

void    check_num_in_b(t_stack **a, t_stack **b)
{
    
}