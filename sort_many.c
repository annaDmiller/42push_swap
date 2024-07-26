#include "push_swap.h"

int sort_many_nums(t_stack **a, t_stack **b)
{
    int max_bits;

    if (!is_sort_finished(*a))
        return ;
    max_bits = count_max_bits(a);
    bit_sorting(a, b, max_bits);
}

void    bit_sorting(t_stack **a, t_stack **b, int max_bits)
{
    
}
