# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 06:10:54 by  souaguen         #+#    #+#              #
#    Updated: 2023/11/05 06:56:00 by souaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
SRCS=$(shell find . -name "ft_*.c")
NAME=libft.a
OBJ=$(SRCS:.c=.o)
CFLAGS=-Wall -Werror -Wextra -I./includes

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
