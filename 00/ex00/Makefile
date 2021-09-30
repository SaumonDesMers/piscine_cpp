CC			= clang++
CFLAGS		= -fsanitize=address -g #-Wall -Wextra -Werror
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

NAME		= megaphone

SRC_DIR		= .
SRCS		= $(patsubst %, $(SRC_DIR)/%, megaphone.cpp)
OBJ_DIR		= obj
OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# $(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
# 			@mkdir -p $(OBJ_DIR)
# 			@$(CC) $(CFLAGS) -I includes -c $< -o $@
# 			@printf "$(On_Green) $(nc)"

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $@ $(LIB)
			@echo "$(Green)*** $(UGreen)Successfully compiling $(NAME)$(Green) ***$(nc)"

all:		$(NAME)

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(BRed)/!\\ $(BYellow)Remove $(NAME)$(BRed) /!\\ $(nc)"

re:			fclean all


.PHONY:		all clean re