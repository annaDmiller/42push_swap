#include "ft_printf.h"

int	print_point(va_list *pars)
{
	void		*point;
	uintptr_t	str_p;

	point = va_arg(*pars, void *);
	str_p = (uintptr_t) point;
	if (str_p == 0)
		return (write(1, "(nil)", 5), 5);
	write(1, "0x", 2);
	return (print_hex(str_p, 'p') + 2);
}

int	print_hex(uintptr_t num, char format)
{
	uintptr_t	lim;
	int				len_num;
	char			*hex_lbase;

	len_num = 1;
	lim = 16;
	hex_lbase = "0123456789abcdef";
	while (lim <= num)
	{
		len_num++;
		lim *= 16;
	}
	lim /= 16;
	while (lim >= 1)
	{
		if (format == 'X')
			ft_putchar_fd(ft_toupper(hex_lbase[num / lim]), 1);
		else
			ft_putchar_fd(hex_lbase[num / lim], 1);
		num %= lim;
		lim /= 16;
	}
	return (len_num);
}
