# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tparand <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 18:41:17 by tparand           #+#    #+#              #
#    Updated: 2017/11/09 21:58:48 by tparand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
PATH_SRCS	= srcs/
PATH_HEADERS	= includes/
SRCS	= $(PATH_SRCS)ft_putchar.c	\
		  $(PATH_SRCS)ft_putstr.c	\
		  $(PATH_SRCS)ft_strcmp.c	\
		  $(PATH_SRCS)ft_strlen.c	\
		  $(PATH_SRCS)ft_swap.c

HEADERS = $(PATH_HEADERS)ft_h.h
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAGS	= -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -I $(HEADERS) $< -o $@

.PHONY: clean fclean

clean:
	rm -Rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

