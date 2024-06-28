# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduranti <gduranti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 15:50:34 by gduranti          #+#    #+#              #
#    Updated: 2024/06/25 10:30:54 by gduranti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Span.cpp

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re