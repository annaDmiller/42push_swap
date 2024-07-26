NAME = push_swap

CC = cc

C_FLAGS = -Wall -Werror -Wextra -g3

RM = rm

RM_FLAGS = -rf

MAKE = make

HEADER = ./push_swap.h

LIBFT_DIR = libft

LIBFT = ft

FILES = check_functions.c ending.c initialization.c main.c \
	shadow_sorting.c solution.c valid_args.c sort_three.c \
	push_func.c rotate_func.c rev_rotate_func.c swap_func.c \
	sort_five.c sort_many.c minor_funcs.c big_num_utils.c

SRCS = $(FILES:c=o)

.PHONY: all clean fclean lib

all: $(NAME)

$(NAME): lib comp_all $(SRCS)
	$(CC) $(C_FLAGS) $(SRCS) -o $(NAME) libft/libft.a

comp_all: $(FILES)
	$(CC) $(C_FLAGS) -c $(FILES)

lib: $(LIBFT_DIR)
	$(MAKE) --no-print-directory -C $(LIBFT_DIR)

clean: $(SRCS)
	$(RM) $(RM_FLAGS) $(SRCS) $(LIBFT_DIR)/*.o

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME) $(LIBFT_DIR)/libft.a

re: fclean all