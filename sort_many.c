#include "push_swap.h"

int sort_many_nums(t_stack **a, t_stack **b)
{
    int max_bits;

    if (!is_sort_finished(*a))
        return (0);
    max_bits = count_max_bits(a);
    bit_sorting(a, b, max_bits);
    return (1);
}

void    bit_sorting(t_stack **a, t_stack **b, int max_bits)
{
    int static  bit_count;
    int         ind_a;

    if (!is_sort_finished(*a))
        return ;
    ind_a = (*a)->ind_top;
    while (ind_a >= 0)
    {
        if (!(((*a)->arr[(*a)->ind_top].sort_ind >> bit_count)&1))
            ra(a, 1);
        else
            pb(a, b);
        ind_a--;
    }
    while ((*b)->ind_top >= 0)
        pa(b, a);
    if (bit_count++ < max_bits)
        bit_sorting(a, b, max_bits);
    return ;
}

int count_max_bits(t_stack **a)
{
    int max_bits;
    int max_val;

    max_val = (*a)->size - 1;
    max_bits = 0;
    while (max_val >> max_bits)
        max_bits++;
    return (max_bits);
}
