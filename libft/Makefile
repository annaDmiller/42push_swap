CC = cc

RM = rm

AR = ar

CFLAGS = -Wall -Werror -Wextra -g3 -I.

RMFLAGS = -f

AROPT = rcs

NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
		ft_printf.c print_hex.c \
		get_next_line.c get_next_line_utils.c

SRCS = $(FILES:c=o)

LIB = 	libft.h \
		ft_printf.h \
		get_next_line.h

all: $(NAME)

$(NAME): $(SRCS)
	$(AR) $(AROPT) $(NAME) $(SRCS)

clean:
	$(RM) $(RMFLAGS) *.o

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
