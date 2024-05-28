#include "libft.h"

void	*ft_memcpy(void *dest_mem, const void *src_mem, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		index;

	dest = (char *) dest_mem;
	src = (const char *) src_mem;
	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest_mem);
}
