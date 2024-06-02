#include "push_swap.h"

int	main(void)
{
	t_stack	*a;
	t_stack	*b;
	int argc = 14;
	char *argv[] = {"./a.out", "5", "3", "-1", "-4", "7", "2", "100", "765", "629", "-6", "-2", "-1526", "-23"};
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
/*	#include <stdio.h>
	for (int i = a->ind_top; i >= 0; i--)
	{
		printf("%i - %i\n", a->arr[i].num, a->arr[i].sort_ind);

	}
	printf("\n");*/
	solution(a, b);
	for (int i = a->ind_top; i >= 0; i--)
	{
		ft_printf("%i - %i\n", a->arr[i].num, a->arr[i].sort_ind);

	}
	ft_printf("\n");
//	for (int i = b->ind_top; i >= 0; i--)
//		printf("%i\n", b->arr[i]);
	return (free_stack(b), free_stack(a), 0);
}
