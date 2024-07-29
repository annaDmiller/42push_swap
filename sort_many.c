#include "push_swap.h"

int sort_stack_big_numbers(t_stack **a, t_stack **b)
{
    int size_chunk;

    if (!is_sort_finished(*a))
        return (0);
    if ((*a)->size <= 100)
    {
        size_chunk = (*a)->size / 5;
        if ((*a)->size % 5)
            size_chunk++;
        move_stack_to_b_many(a, b, size_chunk);
        sort_back_to_a(a, b);
    }
        if ((*a)->size <= 500)
    {
        size_chunk = (*a)->size / 11;
        if ((*a)->size % 11)
            size_chunk++;
        move_stack_to_b_many(a, b, size_chunk);
        sort_back_to_a(a, b);
    }
    return (0);    
}

int move_stack_to_b_many(t_stack **a, t_stack **b, int size_chunk)
{
    static int  num_chunk;
    int         sorted_num;
    int         steps_a;
    int         steps_b;

    if (!is_sort_finished(*a))
        return (0);
    sorted_num = 0;
    while (sorted_num != size_chunk)
    {
        steps_a = move_num_chunk_to_top(a, num_chunk, size_chunk);
        steps_b = check_num_in_b(a, b, steps_a);
        exec_steps_to_move_to_b(a, b, steps_a, steps_b);
        sorted_num++;
    }
    num_chunk++;
    if ((*a)->ind_top >= 0)
        move_stack_to_b_many(a, b, size_chunk);
    return (1);
}

int sort_back_to_a(t_stack **a, t_stack **b)
{
    int num_to_push;
    int steps_b;
    int ind_num;

    num_to_push = 0;
    while ((*b)->ind_top >= 0)
    {
        ind_num = find_ind_for_num(b, num_to_push);
        steps_b = find_part_of_stack_num((*b)->ind_top, ind_num);
        while (steps_b)
        {
            if (steps_b > 0)
            {
                rrb(b, 1);
                steps_b--;
            }
            else
            {
                rb(b, 1);
                steps_b++;
            }
        }
        pa(b, a);
        num_to_push++;
    }
    return (0);
}

int find_ind_for_num(t_stack **stack, int num)
{
    int ind;

    ind = (*stack)->ind_top;
    while (ind >= 0)
    {
        if ((*stack)->arr[ind].sort_ind == num)
            return (ind);
        ind--;
    }
    return (-1);
}
