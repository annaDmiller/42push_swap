#include "push_swap.h"

int sort_stack_hundred_and_less(t_stack **a, t_stack **b, int size_chunk)
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
    sort_chunk_in_b(b);
    prepare_a_for_chunk(a, num_chunk, size_chunk);
    while ((*b)->ind_top >= 0)
        pa(b, a);
    if (++num_chunk * size_chunk < (*a)->size)
        sort_stack_hundred_and_less(a, b, size_chunk);
    return (1);
}
