# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 12:05:51 by dlu               #+#    #+#              #
#    Updated: 2023/05/28 18:08:15 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	PhoneBook
SRC		:=	PhoneBook.cpp Contact.cpp main.cpp
CC		:=	c++
CFLAG	:=	-Wall -Wextra -Werror -std=c++98
RM		:=	/bin/rm -rf

OBJDIR	:=	objs
OBJ		:=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

HEADER	:=	PhoneBook.hpp Contact.hpp

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $^ -o $@

# main.hpp? is it ok if that file doesn't exit?
$(OBJDIR)/%.o: %.cpp %.hpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
