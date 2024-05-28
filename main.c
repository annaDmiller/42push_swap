#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
//	int argc = 6;
//	char *argv[] = {"./a.out", "1", "-4", "6", "-1", "-10"};
	if (argc == 1)
		return (0);
	valid_args(argc, argv);
	a = create_stack(argc, argv);
	b = create_stack(argc, NULL);
	if (!b || !a)
	{
		free_stack(b);
		free_stack(a);
		error_mess();
	}
	solution(a, b);
/*#include <stdio.h>
	for (int i = a->ind_top; i >= 0; i--)
	{
		printf("%i - %i\n", a->arr[i].num, a->arr[i].sort_ind);

	}
	printf("\n");
//	for (int i = b->ind_top; i >= 0; i--)
//		printf("%i\n", b->arr[i]);*/
	return (free_stack(b), free_stack(a), 0);
}

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
