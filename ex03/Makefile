GRN		= \033[1;92m
YLW		= \033[1;93m
RED		= \033[1;91m
CYN		= \033[1;96m
RST		= \033[0;39m
CLN		= \033[K\r\c

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -Wshadow -std=c++98

NAME	= animals.exe

SRC		= AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp

NCLD	= includes/AMateria.hpp  includes/Character.hpp  includes/Cure.hpp  includes/ICharacter.hpp  includes/IMateriaSource.hpp  includes/Ice.hpp

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
	@echo "$(GRN)[Compiled successfully, to run, execute: ./$(NAME)]"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)[Objects cleaned]$(RST)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME) cleaned]$(RST)"

re: fclean all
