#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (start + len > len_s)
		len_s = len_s - start + 1;
	else
		len_s = len + 1;
	ret = (char *) malloc(sizeof(char) * len_s);
	if (ret == NULL)
		return (NULL);
	s += start;
	ft_strlcpy(ret, s, len_s);
	return (ret);
}
