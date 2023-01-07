# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: absela <absela@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 06:32:43 by absela            #+#    #+#              #
#    Updated: 2022/12/26 06:33:08 by absela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED			= 	\e[31;5;118m
GREEN		=	\e[38;5;118m
RESET		=	\e[0m
_SUCCESS	=	$(GREEN)SUCCESS$(RESET)
REMOV		=	$(RED)REMOVED$(RESET)

NAME = Zombie

src =  	main.cpp Zombie.cpp zombieHorde.cpp
		
HDR = Zombie.hpp

CXX = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

obj = $(src:.cpp=.o)

%.o : %.cpp ${HDR}
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