#include "push_swap.h"

int is_sort_finished(t_stack *a)
{
    int ind_stack;

    ind_stack = a->ind_top;
    while (ind_stack >= 0)
    {
        if (a->arr[ind_stack]. > a->arr[ind_stack - 1].num)
            return (-1);
        ind_stack--;
    }
    if (a->ind_top != a->size - 1)
        return (-1);
    return (0);
}

int is_div_finished(t_stack *a, int med)
{
    int ind_stack;

    if (!is_a_sorted(&a))
        return (0);
    ind_stack = a->ind_top;
    while (ind_stack >= 0)
    {
        if (a->arr[ind_stack].sort_ind > med)
            return (1);
        ind_stack--;
    }
    return (0);
}

int is_b_sorted(t_stack **b)
{
    int ind_b;

    ind_b = (*b)->ind_top;
    while (ind_b > 0)
    {
        if ((*b)->arr[ind_b].sort_ind > (*b)->arr[ind_b - 1].sort_ind)
            return (1);
        ind_b--;
    }
    return (0);
}

int is_a_sorted(t_stack **a)
{
    int ind_a;

    ind_a = (*a)->ind_top;
    while (ind_a > 0)
    {
        if ((*a)->arr[ind_a].sort_ind < (*a)->arr[ind_a - 1].sort_ind)
            return (1);
        ind_a--;
    }
    return (0);
}