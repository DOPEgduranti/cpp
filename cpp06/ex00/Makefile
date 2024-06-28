# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 14:29:41 by gduranti          #+#    #+#              #
#    Updated: 2024/06/21 16:32:07 by gduranti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	ScalarConverter.cpp

OBJ = $(SRC:.cpp=.o)

%.cpp: %.o
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re