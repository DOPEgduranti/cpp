# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 11:32:36 by gduranti          #+#    #+#              #
#    Updated: 2024/06/28 11:38:07 by gduranti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re