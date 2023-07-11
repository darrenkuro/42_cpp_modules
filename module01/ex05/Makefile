# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:29:29 by dlu               #+#    #+#              #
#    Updated: 2023/07/11 07:32:06 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	Attack
SRC		:=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADER	:=	Weapon.hpp HumanA.hpp HumanB.hpp

CC		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98
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

