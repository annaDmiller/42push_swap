#include "push_swap.h"

void	valid_args(int argc, char **argv)
{
	int	ind;
	int	ind_c;

	check_dupls(argc, argv);
	ind = 1;
	while (ind < argc)
	{
		ind_c = 0;
		while (argv[ind][ind_c])
		{
			if (argv[ind][ind_c] == '-')
				ind_c++;
			if (!(ft_isdigit(argv[ind][ind_c])))
				error_mess();
			ind_c++;
		}
		ind++;
	}
	check_max_min(argc, argv);
	return ;
}

void	check_dupls(int argc, char **argv)
{
	int	ind_arg;
	int	ind_check_arg;

	ind_arg = 1;
	while (ind_arg < argc - 1)
	{
		ind_check_arg = ind_arg + 1;
		while (ind_check_arg < argc)
		{
			if (!(ft_strncmp(argv[ind_arg], argv[ind_check_arg], 
				ft_strlen(argv[ind_arg]) + 1)))
				error_mess();
			ind_check_arg++;
		}
		ind_arg++;
	}
	return ;
}

void	check_max_min(int argc, char **argv)
{
	int	ind_arg;

	ind_arg = 1;
	while (ind_arg < argc)
	{
		if (argv[ind_arg][0] != '-')
		{
			if (ft_strlen(argv[ind_arg]) >= 10)
				check_pos_10_and_more(argv[ind_arg]);
		}
		else if (ft_strlen(argv[ind_arg]) >= 11)
			check_neg_11_and_more(argv[ind_arg]);
		ind_arg++;
	}
	return ;
}

void	check_pos_10_and_more(char *str)
{
	if (ft_strlen(str) == 10)
		if (str[0] <= '2' && ft_atoi(str) > 0)
			return ;
	error_mess();
}

void	check_neg_11_and_more(char *str)
{
	if (ft_strlen(str) == 11)
		if (str[1] <= '2' && ft_atoi(str) < 0)
			return ;
	error_mess();
}
