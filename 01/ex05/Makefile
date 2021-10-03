CC			= clang++
CFLAGS		= -fsanitize=address -g -Wall -Wextra -Werror
RM			= rm -f
LIB			=

#------------------------------COLOR------------------------------

nc=\033[0m
Green=\033[0;32m
BRed=\033[1;31m
BYellow=\033[1;33m
UGreen=\033[4;32m

#----------------------------MANDATORY----------------------------

NAME		= karen

SRC_DIR		= .
SRCS		= $(patsubst %, $(SRC_DIR)/%, main.cpp karen.cpp)
HEADER		= $(patsubst %, $(SRC_DIR)/%, karen.hpp)
OBJ_DIR		= obj
OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(NAME):	$(OBJS) $(HEADER)
			@$(CC) $(CFLAGS) $(OBJS) -o $@
			@echo "$(Green)*** $(UGreen)Successfully compiling $(NAME)$(Green) ***$(nc)"

all:		$(NAME)

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(BRed)/!\\ $(BYellow)Remove $(NAME)$(BRed) /!\\ $(nc)"

re:			fclean all


.PHONY:		all clean re