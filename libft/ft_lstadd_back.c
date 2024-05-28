#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst)
		{
			while ((*lst)->next)
				lst = &((*lst)->next);
			(*lst)->next = new;
		}
		else
			*lst = new;
	}
}
