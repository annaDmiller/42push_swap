#include "push_swap.h"

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