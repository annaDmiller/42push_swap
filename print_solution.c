#include "push_swap.h"

void    printing_step(t_stack **a, t_stack **b, int med)
{
//    static int  num_commands;
    char        *str_to_print_b;
    char        *str_to_print_a;

    str_to_print_a = NULL;
    str_to_print_b = NULL;
    if (is_div_finished(*a, med))
    {
        if ((*b)->ind_top > 0)
            str_to_print_b = step_without_push_b(b);
        str_to_print_a = step_with_push_a(a, b, med);
    }
    else
    {
        if ((*b)->ind_top >= 0)
            str_to_print_b = step_with_push_b(a, b);
        str_to_print_a = step_without_push_a(a);
    }
    /*num_commands += */print_steps(str_to_print_a, str_to_print_b);
//    if (!is_sort_finished(*a))
//        ft_printf("%i\n\n", num_commands);
    return ;
}

int print_steps(char *str_a, char *str_b)
{
    int ind;
    int len_comm;

    if (str_a == NULL)
        return (ft_printf("%s\n", str_b), 1);
    if (str_b == NULL)
        return (ft_printf("%s\n", str_a), 1);
    if (!ft_strncmp(str_a, "pb", 2) || !ft_strncmp(str_b, "pa", 2))
        return (ft_printf("%s\n%s\n", str_b, str_a), 2);
    ind = 0;
    while (str_a[ind + 1] && str_b[ind + 1])
    {
        if (str_a[ind] != str_b[ind])
            return (ft_printf("%s\n%s\n", str_b, str_a), 2);
        ind++;
    }
    if (str_a[ind + 1] != '\0' || str_b[ind + 1] != '\0')
        return (ft_printf("%s\n%s\n", str_b, str_a), 2);
    len_comm = ft_strlen(str_a);
    return (write(1, str_a, len_comm - 1), write(1, "r\n", 2), 1);
}