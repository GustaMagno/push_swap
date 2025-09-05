NAME	= push_swap
CC		= cc
CFLAGS	= -g -O3 -Iinclude


SRCS	= $(shell find ./src -name "*.c")
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