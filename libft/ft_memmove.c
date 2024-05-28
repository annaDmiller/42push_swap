#include "libft.h"

void	*ft_memmove(void *mem_dest, const void *mem_src, size_t n)
{
	char		*dest;
	const char	*src;
	char		car[n];
	size_t		index;

	index = 0;
	dest = (char *) mem_dest;
	src = (const char *) mem_src;
	while (index < n)
	{
		car[index] = src[index];
		index++;
	}
	index = 0;
	while (index < n)
	{
		dest[index] = car[index];
		index++;
	}
	return (mem_dest);
}
