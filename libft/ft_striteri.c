#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*car;
	size_t	index;

	index = 0;
	while (s[index])
	{
		car = &s[index];
		(*f)(index, car);
		index++;
	}
	return ;
}
