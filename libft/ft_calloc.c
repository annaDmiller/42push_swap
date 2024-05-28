#include "libft.h"

void	*ft_calloc(size_t sztype, size_t n)
{
	void	*ret;

	if (sztype != 0 && n != 0)
		if (sztype > UINT_MAX / n)
			return (NULL);
	ret = malloc(sztype * n);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, sztype * n);
	return (ret);
}
