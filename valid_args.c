/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amelniko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 12:07:21 by amelniko          #+#    #+#             */
/*   Updated: 2024/08/03 12:07:25 by amelniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_dupls(int num_args, char **arr_arg);

static void	check_max_min(int num_args, char **arr_arg);

static void	check_pos_10_and_more(char *str);

static void	check_neg_11_and_more(char *str);

void	valid_args(int num_args, char **arr_arg)
{
	int	ind;
	int	ind_c;

	check_dupls(num_args, arr_arg);
	ind = 0;
	while (ind < num_args)
	{
		ind_c = 0;
		while (arr_arg[ind][ind_c])
		{
			if (arr_arg[ind][ind_c] == '-')
				ind_c++;
			if (!(ft_isdigit(arr_arg[ind][ind_c])))
				error_mess();
			ind_c++;
		}
		ind++;
	}
	check_max_min(num_args, arr_arg);
	return ;
}

static void	check_dupls(int num_args, char **arr_arg)
{
	int	ind_arg;
	int	ind_check_arg;

	ind_arg = 0;
	while (ind_arg < num_args - 1)
	{
		ind_check_arg = ind_arg + 1;
		while (ind_check_arg < num_args)
		{
			if (!(ft_strncmp(arr_arg[ind_arg], arr_arg[ind_check_arg],
						ft_strlen(arr_arg[ind_arg]) + 1)))
				error_mess();
			ind_check_arg++;
		}
		ind_arg++;
	}
	return ;
}

static void	check_max_min(int num_args, char **arr_arg)
{
	int	ind_arg;

	ind_arg = 0;
	while (ind_arg < num_args)
	{
		if (arr_arg[ind_arg][0] != '-')
		{
			if (ft_strlen(arr_arg[ind_arg]) >= 10)
				check_pos_10_and_more(arr_arg[ind_arg]);
		}
		else if (ft_strlen(arr_arg[ind_arg]) >= 11)
			check_neg_11_and_more(arr_arg[ind_arg]);
		ind_arg++;
	}
	return ;
}

static void	check_pos_10_and_more(char *str)
{
	if (ft_strlen(str) == 10)
		if (str[0] <= '2' && ft_atoi(str) > 0)
			return ;
	error_mess();
}

static void	check_neg_11_and_more(char *str)
{
	if (ft_strlen(str) == 11)
		if (str[1] <= '2' && ft_atoi(str) < 0)
			return ;
	error_mess();
}
