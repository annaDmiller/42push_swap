#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	num_node;

	num_node = 0;
	if (lst)
	{
		while (lst)
		{
			num_node++;
			lst = lst->next;
		}
	}
	return (num_node);
}
