# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 16:23:32 by gduranti          #+#    #+#              #
#    Updated: 2024/06/24 10:03:17 by gduranti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Serializer.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re