# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 17:47:17 by adbouras          #+#    #+#              #
#    Updated: 2024/12/17 10:25:46 by adbouras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN		= \033[1;92m
YLW		= \033[1;93m
RED		= \033[1;91m
CYN		= \033[1;96m
RST		= \033[0;39m
CLN		= \033[K\r\c

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -Wshadow -std=c++98

NAME	= animals.exe

SRC		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

NCLD	= includes/Animal.hpp includes/Cat.hpp includes/Dog.hpp includes/Brain.hpp

OBJ_DIR = objects/

OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)%.o:%.cpp $(NCLD)
	@mkdir -p $(OBJ_DIR)
	@echo "$(YLW)[Genarating object file $@]$(RST)$(CLN)"
	@$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJ)
	@echo "$(YLW)[Compiling $(NAME)]$(RST)$(RST)$(CLN)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GRN)[Compiled successfully, to run, execute: ./$(NAME)]$(RST)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)[Objects cleaned]$(RST)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME) cleaned]$(RST)"

re: fclean all
