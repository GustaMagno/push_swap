NAME	= push_swap
CC		= cc
CFLAGS	= -g -O3 -Iinclude


SRCS	= ft_split.c \
			ft_atol.c \
			ft_strlcpy.c \
			parsing.c \
			push_swap.c \
			lstfunc.c \
			free_push.c \
			operations/push.c \
			operations/rotate.c \
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