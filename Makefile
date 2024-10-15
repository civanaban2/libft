NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

M_SRCS =	$(wildcard ft_*.c)

M_OBJS = $(M_SRCS:.c=.o)
B_OBJS = $(B_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(M_OBJS)
	ar rc $(NAME) $(M_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(M_OBJS) $(B_OBJS)

fclean:
	rm -f $(M_OBJS) $(NAME) $(B_OBJS)

re: fclean all
	
.PHONY: all clean fclean re