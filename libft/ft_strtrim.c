#include "libft.h"

static int	ft_find_start(char const *s1, char const *set);

static int	ft_find_end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end;
	size_t	size;

	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start <= end)
		size = (size_t) end - start + 1;
	else
		size = 0;
	ret = ft_substr(s1, start, size);
	return (ret);
}

static int	ft_find_start(char const *s1, char const *set)
{
	int	ind_s1;
	int	ind_set;

	ind_s1 = -1;
	while (s1[++ind_s1])
	{
		ind_set = -1;
		while(set[++ind_set] && s1[ind_s1] != set[ind_set]) ;
		if (set[ind_set] == '\0')
			break;
	}
	return (ind_s1);
}

static int	ft_find_end(char const *s1, char const *set)
{
	int	ind_s1;
	int	ind_set;

	ind_s1 = ft_strlen(s1);
	while (--ind_s1 >= 0)
	{
		ind_set = -1;
		while(set[++ind_set] && s1[ind_s1] != set[ind_set]) ;
		if (set[ind_set] == '\0')
			break;
	}
	return (ind_s1);
}
