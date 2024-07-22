#include "push_swap.h"

int    sort_stack_three_and_less(t_stack **a)
{
    int num_to_sort;

    if (!is_a_sorted(a))
        return (0);
    if ((*a)->size == 2)
        return (swap_stack(a), ft_printf("sa\n"), 1);
    num_to_sort = num_not_sorted(a);
    if (num_to_sort == 2)
    {
        swap_stack(a);
        ft_printf("sa\n");
        sort_stack_three_and_less(a);
    }
    if (num_to_sort == 3)
    {
        if ((*a)->arr[(*a)->ind_top].sort_ind == 1)
            return (rev_rotate_stack(a), ft_printf("rra\n", 2));
        else
            return (rotate_stack(a), ft_printf("ra\n"), 2);
    }
    return (1);
}

int num_not_sorted(t_stack **a)
{
    int not_sorted;
    int ind;

    not_sorted = 0;
    ind = (*a)->ind_top;
    while (ind >= 0)
    {
        if (ind != (*a)->arr[ind].sort_ind)
            not_sorted++;
        ind--;
    }
    return (not_sorted);
}