#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t	index;

	if (dest && src)
	{
		index = 0;
		if (sz != 0)
		{
			while (index < sz - 1 && src[index])
			{
				dest[index] = src[index];
				index++;
			}
			dest[index] = '\0';
		}
		return (ft_strlen(src));
	}
	return (0);
}
