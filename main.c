#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**all_args;
	int		num_args;

//	int argc = 14;
//	char *argv[] = {"./a.out", "5", "3", "-1", "-4", "7", "2", "100", "765", "629", "-6", "-2", "-1526", "-23"};
	if (argc == 1)
		return (0);
	num_args = -1;
	all_args = create_arr_args(argc, argv);
	while (all_args[++num_args]);
	valid_args(num_args, all_args);
	a = create_stack(num_args, all_args);
	b = create_stack(num_args, NULL);
	free_arr(all_args);
	if (!b || !a)
	{
		free_stack(b);
		free_stack(a);
		error_mess();
	}
	solution(a, b);
	for (int i = a->ind_top; i >= 0; i--)
	{
		ft_printf("%i - %i\n", a->arr[i].num, a->arr[i].sort_ind);

	}
	ft_printf("\n");
//	for (int i = b->ind_top; i >= 0; i--)
//		printf("%i\n", b->arr[i]);*/
//	return (free_stack(b), free_stack(a), 0);
	return (0);
}