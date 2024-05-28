CC = cc

RM = rm

AR = ar

CFLAGS = -Wall -Werror -Wextra -g3 -L$(LIB)

RMFLAGS = -rf

AROPT = rs

NAME = libft.a

FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_printf.c print_hex.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

SRCS = $(FILES:c=o)

SRCS_B = $(BONUS:c=o)

LIB = libft.h ft_printf.h

$(NAME): all

all: comp_all
	$(AR) $(AROPT) $(NAME) $(SRCS)

comp_all: $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

bonus: all comp_bonus
	$(AR) $(AROPT) $(NAME) $(SRCS_B)

comp_bonus: $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

clean: $(SRCS)
	$(RM) $(RMFLAGS) *.o

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all
