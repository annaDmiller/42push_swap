#include "push_swap.h"

void	error_mess(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	free_stack(t_stack *stack)
{
	if (stack)
		free(stack->arr);
	free(stack);
}