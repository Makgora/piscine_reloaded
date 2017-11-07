NAME	= libft.a
SRCS	= ./srcs/
HEADERS	= ./includes/
CFILES	= ft_putchar.c	\
		  ft_putstr.c	\
		  ft_strcmp.c	\
		  ft_strlen.c	\
		  ft_swap.c

OFILES	= $(CFILES:.c=.o)
CC		= gcc
FLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo
	@echo ">> Compilation CFILES <<"
	@echo
	#$(CC) $(FLAGS) -c $(CFILES) $(HFILES)
	@echo
	@echo ">> Making LIBFT.A <<"
	@echo
	ar rc $(NAME) $(OFILES)
	@echo
	@echo ">> Indexing LIBFT.A <<"
	@echo
	ranlib $(NAME)
clean:
	@echo
	@echo ">> Cleaning OFILES <<"
	@echo
	rm -Rf $(OFILES)

fclean: clean
	@echo
	@echo ">> Cleaning LIBFT.A <<"
	@echo
	rm -Rf $(NAME)

re: fclean all

.PHONY: clean fclean
