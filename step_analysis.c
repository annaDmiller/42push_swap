#include "push_swap.h"

char    *step_with_push_b(t_stack **a, t_stack **b)
{
    if (!is_a_sorted(a) && !is_b_sorted(b))
        return (push_stack(b, a), "pa");
    if ((*b)->ind_top == 0)
        return (NULL);
    return (step_without_push_b(b));
}

char    *step_with_push_a(t_stack **a, t_stack **b, int med)
{
    if ((*a)->arr[(*a)->ind_top].sort_ind > med)
        return (push_stack(a, b), "pb");
    return (step_without_push_a(a));
}

char    *step_without_push_a(t_stack **a)
{
    int sind_last;
    int sind_first;
    int sind_alm_last;

    if (!is_a_sorted(a))
        return (NULL);
    sind_last = (*a)->arr[(*a)->ind_top].sort_ind;
    sind_first = (*a)->arr[0].sort_ind;
    if ((*a)->ind_top > 0)
        sind_alm_last = (*a)->arr[(*a)->ind_top - 1].sort_ind;
    else
        sind_alm_last = -1;
    if (sind_alm_last - sind_last > 0)
        return (swap_stack(a), "sa");
    if (sind_first - sind_last > sind_alm_last - sind_last)
        return (rev_rotate_stack(a), "rra");
    return (rotate_stack(a), "ra");
}

char    *step_without_push_b(t_stack **b)
{
    int sind_last;
    int sind_first;
    int sind_alm_last;

    if (!is_b_sorted(b))
        return (NULL);
    sind_last = (*b)->arr[(*b)->ind_top].sort_ind;
    sind_first = (*b)->arr[0].sort_ind;
    if ((*b)->ind_top > 0)
        sind_alm_last = (*b)->arr[(*b)->ind_top - 1].sort_ind;
    else
        sind_alm_last = -1;
    if (sind_alm_last - sind_last < 0)
        return (swap_stack(b), "sb");
    if (sind_first - sind_last < sind_alm_last - sind_last)
        return (rev_rotate_stack(b), "rrb");
    return (rotate_stack(b), "rb");
}