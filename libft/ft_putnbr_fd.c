#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long) n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr_fd((int) (num / 10), fd);
		ft_putchar_fd(num % 10 + '0', fd);
	}
	else
		ft_putchar_fd(num % 10 + '0', fd);
	return ;
}
