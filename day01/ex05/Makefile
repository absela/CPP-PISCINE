# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 04:12:20 by absela            #+#    #+#              #
#    Updated: 2023/01/02 01:42:40 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			= 	\e[31;5;118m
GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	$(GREEN)SUCCESS$(RESET)
REMOV		=	$(RED)REMOVED$(RESET)

NAME = Harl

src =  main.cpp  Harl.cpp 

CXX = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

obj = $(src:.cpp=.o)

%.o : %.cpp Harl.hpp
	@${CXX} ${FLAGS} -c $< -o $@

all : $(NAME)

$(NAME) : $(obj)
	@${CXX} ${FLAGS} $(obj) -o $(NAME)
	@printf "$(_SUCCESS) $(NAME) is ready!.\n"

clean :
	@rm -f $(obj)

fclean : clean
	@rm -f $(NAME)
	@printf "$(REMOV) $(NAME) is Removed!.\n"

re : fclean all