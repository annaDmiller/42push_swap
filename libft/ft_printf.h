#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include "./libft.h"
#include <stdint.h>
int	ft_printf(const char *str, ...);
int	find_type(va_list *pars, char format);
int	print_string(va_list *pars);
int	print_num(va_list *pars);
int	print_point(va_list *pars);
int	print_uint(va_list *pars);
int	print_hex(uintptr_t num, char format);
#endif
