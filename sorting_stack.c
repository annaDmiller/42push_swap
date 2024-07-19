#include "push_swap.h"

void    radix_sort(t_stack **a, t_stack **b, int sort_digit);

void    push_back(t_stack **a, t_stack **b);

void    sort_small_stack(t_stack *a, t_stack *b)
{
    int max_num;
    int sort_digit;

    max_num = a->size - 1;
    sort_digit = 0;
    while ((max_num >> sort_digit) != 0)
    {
        radix_sort(&a, &b, sort_digit);
        push_back(&a, &b);
        sort_digit++;
    }
}

void    radix_sort(t_stack **a, t_stack **b, int sort_digit)
{
    int count_oper;

    count_oper = (*a)->ind_top;
    while (count_oper >= 0)
    {
        if ((((*a)->arr[(*a)->ind_top].sort_ind >> sort_digit) & 1) == 1)
        {
            rotate_stack(a);
            ft_printf("ra\n");
        }
        else
        {
            push_stack(a, b);
            ft_printf("pa\n");
        }
        count_oper--;
    }
    return ;
}

void    push_back(t_stack **a, t_stack **b)
{
    while ((*a)->ind_top != (*a)->size - 1)
    {
        push_stack(b, a);
        ft_printf("pb\n");
    }
    return ;
}
