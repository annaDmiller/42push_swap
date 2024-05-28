#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	ind;
	int	sign;

	ind = 0;
	number = 0;
	sign = 1;
	while (nptr[ind] == ' ' || (nptr[ind] >= 9 && nptr[ind] <= 13))
		ind++;
	if (nptr[ind] == '-' || nptr[ind] == '+')
		if (nptr[ind++] == '-')
			sign *= -1;
	while (ft_isdigit(nptr[ind]))
	{
		number = 10 * number + nptr[ind] - 48;
		ind++;
	}
	return (sign * number);
}
