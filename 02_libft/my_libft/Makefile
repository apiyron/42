#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 16:48:27 by ldonnis           #+#    #+#              #
#    Updated: 2018/12/07 19:26:44 by mrhea-ro         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
PATH_SRC = ./
SRC = $(PATH_SRC)*.c
HEADER = $(PATH_SRC)*.h
OBJ =  *.o
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
	ar rc libft.a $(OBJ)
	ranlib libft.a
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)

re: fclean all
