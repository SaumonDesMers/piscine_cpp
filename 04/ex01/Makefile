CC			= clang++
CFLAGS		= -fsanitize=address -g -std=c++98 #-Wall -Wextra -Werror
RM			= rm -f
LIB			=

#------------------------------COLOR------------------------------

nc=\033[0m
Green=\033[0;32m
BRed=\033[1;31m
BYellow=\033[1;33m
UGreen=\033[4;32m
On_Green=\033[42m

#----------------------------MANDATORY----------------------------

NAME		= a.out

SRC_DIR		= .
SRCS		= $(patsubst %, $(SRC_DIR)/%, main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp)
HEADER		= $(patsubst %, $(SRC_DIR)/%, Animal.hpp Cat.hpp Dog.hpp Brain.hpp)
OBJ_DIR		= obj
OBJS		= $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
			@mkdir -p $(OBJ_DIR)
			@$(CC) $(CFLAGS) -I includes -c $< -o $@
			@printf "$(On_Green) $(nc)"

$(NAME):	$(OBJS) $(HEADER)
			@$(CC) $(CFLAGS) $(OBJS) -o $@
			@echo "\n$(Green)*** $(UGreen)Successfully compiling $(NAME)$(Green) ***$(nc)"

all:		$(NAME)

clean:
			@$(RM) $(OBJS)
			@echo "$(BRed)/!\\ $(BYellow)Remove $(NAME) obj$(BRed) /!\\ $(nc)"

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(BRed)/!\\ $(BYellow)Remove $(NAME)$(BRed) /!\\ $(nc)"

re:			fclean all

.PHONY:		all clean fclean re