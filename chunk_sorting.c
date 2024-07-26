#include "push_swap.h"

void    exec_steps_to_move_to_b(t_stack **a, t_stack **b, int steps_a, int steps_b)
{
    if (steps_a == -1 && steps_b == -1)
        return (ss(a, b));
    if (steps_a < 0 && steps_b < 0)
        return (exec_steps_rr(a, b, steps_a, steps_b));
    if (steps_a > 0 && steps_b > 0)
        return (exec_steps_rrr(a, b, steps_a, steps_b));
    else
        return (exec_dif_steps(a, b, steps_a, steps_b));
}

void    exec_steps_rrr(t_stack **a, t_stack **b, int steps_a, int steps_b)
{
    int steps_rrr;
    int temp;

    steps_rrr = min_of_two(steps_a, steps_b);
    temp = steps_rrr;
    while (steps_rrr--)
        rrr(a, b);
    if (steps_a == steps_b)
        return (pb(a, b));
    if (!(steps_a - temp))
    {
        while (steps_b - temp++)
            rrb(b, 1);
        return (pb(a, b));
    }
    else
    {
        while (steps_a - temp++)
            rra(a, 1);
        return (pb(a, b));
    }
}

void    exec_steps_rr(t_stack **a, t_stack **b, int steps_a, int steps_b)
{
    int steps_rr;
    int temp;

    steps_rr = max_of_two(steps_a, steps_b);
    temp = steps_rr;
    while (steps_rr++)
        rr(a, b);
    if (steps_a == steps_b)
        return (pb(a, b));
    if (!(steps_a - temp))
    {
        while (steps_b - temp--)
            rb(b, 1);
        return (pb(a, b));
    }
    else
    {
        while (steps_a - temp--)
            ra(a, 1);
        return (pb(a, b));
    }
}

void    exec_dif_steps(t_stack **a, t_stack **b, int steps_a, int steps_b)
{
    if (steps_a >= 0)
        while (steps_a--)
            rra(a, 1);
    else if (steps_a < 0)
    {
        if (steps_a == -1)
            sa(a, 1);
        else
            while (steps_a++)
                ra(a, 1);
    }
    if (steps_b >= 0)
        while (steps_b--)
            rrb(b, 1);
    else if (steps_b < 0)
    {
        if (steps_b == -1)
            sb(b, 1);
        else
            while (steps_b++)
                rb(b, 1);
    }
    return (pb(a, b));
}