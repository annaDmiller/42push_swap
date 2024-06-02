#include "push_swap.h"

void    solution(t_stack *a, t_stack *b)
{
    int med;

    med = (a->size - 1) / 2;
    if ((a = shadow_sorting(a)) == NULL)
    {
        free_stack(a);
        free_stack(b);
        error_mess();
    }
    while (is_sort_finished(a))
    {
        printing_step(&a, &b, med);
        for (int i = a->ind_top; i >= 0; i--)
	    {
		    ft_printf("%i\n", a->arr[i].num);
        }
	    ft_printf("\n");
    }
    return ;
}