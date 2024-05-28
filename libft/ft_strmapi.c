#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len_s;
	size_t	index;

	len_s = ft_strlen(s);
	ret = (char *) malloc (sizeof(char) * (len_s + 1));
	if (ret == NULL)
		return (NULL);
	index = 0;
	while (index < len_s)
	{
		ret[index] = (*f)(index, s[index]);
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
