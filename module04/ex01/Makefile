# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:29:29 by dlu               #+#    #+#              #
#    Updated: 2023/07/19 12:26:02 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	animal
SRC		:=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
HEADER	:=	Animal.hpp Dog.hpp Cat.hpp Brain.hpp

CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -g
RM		:=	/bin/rm -rf
OBJDIR	:=	objs
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
