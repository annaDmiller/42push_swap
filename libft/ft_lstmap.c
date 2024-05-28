#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*new_addr;

	if ((!lst) || (!(*f)) || (!(*del)))
		return (NULL);
	new_lst = NULL;
	temp = NULL;
	while  (lst)
	{
		new_addr = (t_list *) malloc(sizeof(t_list));
		if (!new_addr)
			return (ft_lstclear(&new_lst, (*del)), NULL);
		if (temp)
			temp->next = new_addr;
		temp = new_addr;
		if (!new_lst)
			new_lst = temp;
		temp->content = (*f)(lst->content);
		lst = lst->next;
	}
	temp->next = NULL;
	return (new_lst);
}
