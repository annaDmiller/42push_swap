#include "push_swap.h"

void    solution(t_stack *a, t_stack *b)
{
    if ((a = shadow_sorting(a)) == NULL)
    {
        free_stack(a);
        free_stack(b);
        error_mess();
    }
    return ;
}