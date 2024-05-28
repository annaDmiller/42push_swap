#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char	*car;

	car = &c;
	write(fd, car, 1);
	return ;
}
