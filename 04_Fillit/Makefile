# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 23:54:49 by mrhea-ro          #+#    #+#              #
#    Updated: 2019/07/19 00:25:52 by mrhea-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = main.c libft.a ft_error.c validate_fillit.c
OBJ = main.o ft_error.o validate_fillit.o
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -c $(SRC) -o $(NAME)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
