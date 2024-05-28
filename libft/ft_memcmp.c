#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				index;

	index = 0;
	s1 = mem1;
	s2 = mem2;
	while (index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
