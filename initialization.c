#include "push_swap.h"

t_stack	*create_stack(int argc, char **values)
{
	int		ind;
	t_stack	*stack;

	stack = (t_stack *) malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	ind = argc - 1;
	stack->size = argc - 1;
	stack->ind_top = -1;
	stack->arr = (t_st_num *) malloc(sizeof(t_st_num) * stack->size);
	if (!(stack->arr))
		return (NULL);
	if (values)
		while (ind > 0)
			(stack->arr[++stack->ind_top]).num = ft_atoi(values[ind--]);
	return (stack);
}
