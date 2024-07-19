#include "push_swap.h"

void    solution(t_stack *a, t_stack *b)
{
    if (!(a = shadow_sorting(a)))
        
    if (!is_sort_finished(a))
        return ;
    if (a->size <= 5)
        sort_small_stack(a, b);
    return ;
}