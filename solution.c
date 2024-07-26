#include "push_swap.h"

void    solution(t_stack *a, t_stack *b)
{
    int size_chunk;

    if (!(a = shadow_sorting(a)))
    {
        free_stack(a);
        free_stack(b);
        error_mess();
    }
    if (!is_sort_finished(a))
        return ;
    if (a->size <= 3)
        sort_stack_three_and_less(&a);
    if (a->size <= 5)
        sort_stack_five_and_less(&a, &b);
    else if (a->size > 5)
    {

    }       
    return ;
}