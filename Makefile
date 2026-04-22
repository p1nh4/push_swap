NAME			:= push_swap
CC				:= cc
C_FLAGS			:= -Wall -Wextra -Werror -gdwarf-4
AR				:= ar
AR_FLAGS		:= -rcs
SRC_DIR			:= src
OBJ_DIR			:= obj
LIB				:= lib
LIBFT			:= $(LIB)/libft.a
LINK			:= -Llib -lft
SRC_INCLUDE		:= push_swap.h
SRC				:= push_swap.c	\
				   ft_stack_init.c
OBJ				:= $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))
RM				:= rm -f

all : $(LIBFT) $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(C_FLAGS) -o $@ $^ $(LINK)

$(LIBFT) :
	$(MAKE) -C $(LIB)

$(OBJ_DIR)/%.o : %.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(C_FLAGS) -c -o $@ $<

test: $(NAME)
	cc -Wall -Wextra -Werror push_swap.c -o push_swap

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	$(RM) -r $(OBJ_DIR)

re : fclean all

.PHONY : all bonus clean fclean re
