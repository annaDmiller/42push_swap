#include "push_swap.h"

int    sort_stack_three_and_less(t_stack **a)
{
    int num_to_sort;

    if (!is_sort_finished(*a))
        return (0);
    if ((*a)->size == 2)
        return (sa(a, 1), 1);
    num_to_sort = num_not_sorted(a);
    if (num_to_sort == 2)
    {
        sa(a, 1);
        sort_stack_three_and_less(a);
    }
    if (num_to_sort == 3)
    {
        if ((*a)->arr[(*a)->ind_top].sort_ind > 
            (*a)->arr[(*a)->ind_top - 1].sort_ind)
            return (rra(a, 1), 2);
        else
            return (ra(a, 1), 2);
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