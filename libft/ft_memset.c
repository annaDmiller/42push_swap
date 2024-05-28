#include "libft.h"

void	*ft_memset(void *mem, int let, size_t n)
{
	char	*str;
	unsigned char car;

	if (mem == NULL)
		return (NULL);
	str = mem;
	car = (unsigned char) let;
	while (n-- > 0)
		str[n] = car;
	return (mem);
}
