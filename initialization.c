#include "push_swap.h"

static size_t	count_total_len(int argc, char **argv);

char	**create_arr_args(int argc, char **argv)
{
	char	**ret_arr;
	char	*args_line;
	
	args_line = create_one_line(argc, argv);
	ret_arr = ft_split(args_line, ' ');
	free(args_line);
	if (!ret_arr)
		error_mess();
	return (ret_arr);
}

char	*create_one_line(int argc, char **argv)
{
	char	*ret_line;
	int		ind_s;
	size_t	total_len;

	total_len = count_total_len(argc, argv);
	ret_line = (char *) ft_calloc(sizeof(char), total_len);
	if (!ret_line)
		error_mess();
	ind_s = 0;
	while (++ind_s < argc)
	{
		ft_strlcat(ret_line, argv[ind_s], total_len);
		ft_strlcat(ret_line, " ", total_len);
	}
	return (ret_line);
}

t_stack	*create_stack(int num_args, char **values)
{
	int		ind;
	t_stack	*stack;

	stack = (t_stack *) malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	ind = num_args - 1;
	stack->size = num_args;
	stack->ind_top = -1;
	stack->arr = (t_st_num *) malloc(sizeof(t_st_num) * stack->size);
	if (!(stack->arr))
		return (NULL);
	if (values)
		while (ind >= 0)
			(stack->arr[++stack->ind_top]).num = ft_atoi(values[ind--]);
	return (stack);
}

static size_t	count_total_len(int argc, char **argv)
{
	int		ind_s;
	size_t	total_len;

	ind_s = 0;
	total_len = 0;
	while (++ind_s < argc)
		total_len += ft_strlen(argv[ind_s]) + 1;
	return (total_len);
}