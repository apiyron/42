# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caking <caking@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 16:48:27 by mrhea-ro          #+#    #+#              #
#    Updated: 2019/05/14 22:03:26 by caking           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ =  *.o
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c ./libc/*.c ./additional/*.c ./bonus/*.c ./personal/*.c -I ./
	ar rc libft.a $(OBJ)
	ranlib libft.a
clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all