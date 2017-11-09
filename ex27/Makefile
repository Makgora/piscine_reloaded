NAME	= ft_display_file
CC		= gcc
CFLAGS	= -Werror -Wextra -Wall
SRCS	= ft_display_file.c
OBJS	= $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)
