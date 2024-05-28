#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "./libft/libft.h"
#include "./libft/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
typedef struct		s_st_num
{
	int				num;
	unsigned int	sort_ind;
}					t_st_num;

typedef struct	s_stack
{
	int			ind_top;
	int			size;
	t_st_num	*arr;
}				t_stack;


void	error_mess(void);
void	free_stack(t_stack *stack);
void	valid_args(int argc, char **argv);
void	check_dupls(int argc, char **argv);
void	check_max_min(int argc, char **argv);
void	check_pos_10_and_more(char *str);
void	check_neg_11_and_more(char *str);
t_stack	*create_stack(int argc, char **values);
void    solution(t_stack *a, t_stack *b);
t_stack	*shadow_sorting(t_stack *a);
int 	*copy_arr(t_stack *a);
int		merge_sort(int **arr, int l_ind, int r_ind);
int		merge(int **arr, int l_ind, int r_ind, int mid_ind);
void    merge_in_temp(int **arr, int **temp_arr, int l_ind, int r_ind);
#endif
