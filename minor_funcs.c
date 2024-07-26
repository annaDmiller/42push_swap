#include "push_swap.h"

int min_of_two(int num1, int num2)
{
    if (num1 < num2)
        return (num1);
    else
        return (num2);
}

int max_of_two(int num1, int num2)
{
    if (num1 > num2)
        return (num1);
    else
        return (num2);
}

int max_of_stack(t_stack **stack)
{
    int max;
    int ind;
    int max_ind;

    ind = (*stack)->ind_top - 1;
    max = (*stack)->arr[(*stack)->ind_top].sort_ind;
    max_ind = (*stack)->ind_top;
    while (ind >= 0)
    {
        if (max < (*stack)->arr[ind].sort_ind)
            max_ind = ind;
        max = max_of_two(max, (*stack)->arr[ind].sort_ind);
        ind--;
    }
    return (max_ind);
}

int min_of_stack(t_stack **stack)
{
    int min;
    int ind;
    int min_ind;

    ind = (*stack)->ind_top - 1;
    min = (*stack)->arr[(*stack)->ind_top].sort_ind;
    min_ind = (*stack)->ind_top;
    while (ind >= 0)
    {
        if (min > (*stack)->arr[ind].sort_ind)
            min_ind = ind;
        min = min_of_two(min, (*stack)->arr[ind].sort_ind);
        ind--;
    }
    return (min_ind);
}