# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 12:05:51 by dlu               #+#    #+#              #
#    Updated: 2023/05/28 13:23:53 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	megaphone
SRC		:=	megaphone.cpp
CC		:=	c++
CFLAG	:=	-Wall -Wextra -Werror -std=c++98
RM		:=	/bin/rm -rf

.phony: all fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

fclean:
	$(RM) $(NAME)

re: fclean all
