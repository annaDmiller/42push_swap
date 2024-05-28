#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ret;
	size_t	len_src;

	len_src = ft_strlen(src);
	ret = (char *) malloc(sizeof(char) * (len_src + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, src, len_src + 1);
	return (ret);
}
