# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlu <dlu@student.42berlin.de>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:29:29 by dlu               #+#    #+#              #
#    Updated: 2023/07/29 20:00:15 by dlu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	span
SRC		:=	main.cpp Span.cpp
HEADER	:=	Span.hpp

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
