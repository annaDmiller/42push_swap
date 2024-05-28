#include "libft.h"

char	*ft_strnstr(char *src, const char *search, size_t len)
{
	size_t	ind_src;
	size_t	ind_search;

	if (*search == '\0')
		return (src);
	ind_src = 0;
	while (src[ind_src])
	{
		ind_search = 0;
		while (ind_search + ind_src <= len)
		{
			if (search[ind_search] == '\0')
				return (src + ind_src);
			if (src[ind_src + ind_search] != search[ind_search])
				break ;
			ind_search++;
		}
		ind_src++;
	}
	return (0);
}
