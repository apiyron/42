# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrhea-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 16:48:27 by mrhea-ro          #+#    #+#              #
#    Updated: 2019/04/30 23:21:48 by mrhea-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
HEADER = *.h
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
