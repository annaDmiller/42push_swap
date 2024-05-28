#include "libft.h"

int	ft_isascii(int c)
{
	if ((unsigned) c < 128)
		return (1);
	else
		return (0);
}
