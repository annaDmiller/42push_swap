#include "libft.h"

void	*ft_memchr(void *mem_src, int c, size_t n)
{
	unsigned char		*src;
	unsigned char		car;
	size_t				index;

	index = 0;
	car = (unsigned char) c;
	src = mem_src;
	while (index < n)
	{
		if (*src == car)
			return (mem_src + index);
		index++;
		src++;
	}
	return (NULL);
}
