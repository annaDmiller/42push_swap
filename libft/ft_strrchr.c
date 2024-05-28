#include "libft.h"

char	*ft_strrchr(char *src, int c)
{
	size_t	index;
	char	car;

	car = (char) c;
	index = ft_strlen(src);
	while (index != 0)
	{
		if (src[index] == car)
			return (src + index);
		index--;
	}
	if (src[index] == car)
		return (src + index);
	return (NULL);
}
