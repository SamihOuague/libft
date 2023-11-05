# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souaguen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 06:10:54 by  souaguen         #+#    #+#              #
#    Updated: 2023/11/05 06:28:19 by souaguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
SRCS=$(./ft_%.c)
CFLAGS=-c -Wall -Werror -Wextra -I./
NAME=libft.a
OBJ=$(SRCS:.c=.o)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
