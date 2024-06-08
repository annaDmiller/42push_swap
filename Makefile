NAME = push_swap

CC = cc

C_FLAGS = -Wall -Werror -Wextra -g3

RM = rm

RM_FLAGS = -rf

MAKE = make

HEADER = ./push_swap.h

LIBFT_DIR = libft

LIBFT = ft

FILES = check_functions.c ending.c initialization.c main.c operations.c print_solution.c \
	shadow_sorting.c solution.c step_analysis.c valid_args.c

SRCS = $(FILES:c=o)

.PHONY: all clean fclean libft

all: $(NAME)

$(NAME): libft comp_all $(SRCS)
	$(CC) $(C_FLAGS) $(SRCS) -o $(NAME) libft/libft.a

comp_all: $(FILES)
	$(CC) $(C_FLAGS) -c $(FILES)

libft: $(LIBFT_DIR)
	$(MAKE) --no-print-directory -C $(LIBFT_DIR) bonus

clean: $(SRCS)
	$(RM) $(RM_FLAGS) $(SRCS) $(LIBFT_DIR)/*.o

fclean: clean
	$(RM) $(RM_FLAGS) $(NAME) $(LIBFT_DIR)/libft.a

re: fclean all