NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Wextra -Werror


SRCS	= ft_split.c \
			ft_atol.c \
			ft_strlcpy.c \
			parsing.c \
			push_swap.c \
			lstfunc.c \
			free_push.c \
			radix.c \
			cases.c \
			operations/push.c \
			operations/rotate.c \
			operations/rrotate.c \
			operations/swap.c \

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re run