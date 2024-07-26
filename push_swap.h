#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include "./libft/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# define ABS(Value) (((Value) >= 0) ? (Value) : -(Value))

typedef struct	s_st_num
{
	int			num;
	int			sort_ind;
}				t_st_num;

typedef struct	s_stack
{
	int			ind_top;
	int			size;
	t_st_num	*arr;
}				t_stack;

//check_functions.c
int 			is_sort_finished(t_stack *a);
int 			is_div_finished(t_stack *a, int med);
int 			is_a_sorted(t_stack **a);
int 			is_b_sorted(t_stack **b);


//ending.c
void			error_mess(void);
void			free_stack(t_stack *stack);
void			free_arr(char **arr_args);


//initialization.c
char			**create_arr_args(int argc, char **argv);
char			*create_one_line(int argc, char **argv);
t_stack			*create_stack(int argc, char **values);

//minor_funcs.c
int min_of_two(int num1, int num2);
int max_of_two(int num1, int num2);

//push_func.c
void	pa(t_stack **from_b, t_stack **to_a);
void	pb(t_stack **from_a, t_stack **to_b);

//rev_rotate_func.c
void	rra(t_stack **a, int opt);
void	rrb(t_stack **b, int opt);
void    rrr(t_stack **a, t_stack **b);

//rotate_func.c
void	ra(t_stack **a, int opt);
void	rb(t_stack **b, int opt);
void    rr(t_stack **a, t_stack **b);

//shadow_sorting.c
t_stack			*shadow_sorting(t_stack *a);
int 			*copy_arr(t_stack *a);
int				merge_sort(int **arr, int l_ind, int r_ind);
int				merge(int **arr, int l_ind, int r_ind);
void    		merge_in_temp(int **arr, int **temp_arr, int l_ind, int r_ind);

//solution.c
void    		solution(t_stack *a, t_stack *b);

//sort_five.c
int    sort_stack_five_and_less(t_stack **a, t_stack **b);
int find_num_to_b(t_stack **a, int ind_to_search);
void    move_to_top_num(t_stack **a, int ind_search);

//sort_three.c
int    sort_stack_three_and_less(t_stack **a);
int 	num_not_sorted(t_stack **a);

//swap_func.c
void    sa(t_stack **a, int opt);
void	sb(t_stack **b, int opt);
void    ss(t_stack **a, t_stack **b);

//valid_args.c
void			valid_args(int argc, char **argv);
void			check_dupls(int argc, char **argv);
void			check_max_min(int argc, char **argv);
void			check_pos_10_and_more(char *str);
void			check_neg_11_and_more(char *str);
#endif
