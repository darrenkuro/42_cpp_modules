# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 12:05:51 by dlu               #+#    #+#              #
#    Updated: 2023/07/11 06:50:27 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	megaphone
SRC		:=	megaphone.cpp

CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98
RM		:=	/bin/rm -rf
OBJDIR	:=	objs
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
