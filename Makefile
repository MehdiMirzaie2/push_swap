# SRCS 		= main.c push.c make_linked_list.c rotate.c swap.c \
# 				small_logic.c three_sort.c five_sort.c big_sort.c set_cost.c smallest_large.c\
# 				utils.c utils2.c 

# OBJS 		= $(SRCS:.c=.o)

# CC 			= gcc
# RM 			= rm -f
# CFLAGS 		= -Llibft -lft
# OFLAGS 		= -I libft -Wall -Wextra -Werror
# libft 		= libft/libft.a

# NAME 		= push_swap

# all: 		$(NAME)

# $(libft):
# 			make -C libft

# $(NAME):	$(OBJS) | $(libft)
# 			$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

# %.o : %.c
# 			$(CC) $(OFLAGS) -c $< -o $@
# clean:
# 			$(RM) $(OBJS)
# 			make -C libft clean

# fclean:		clean
# 			$(RM) $(NAME)
# 			make -C libft fclean

# re:			fclean $(NAME)

# .PHONY:		all clean fclean re

NAME 		:= push_swap

SRC_DIR		:= src
OBJ_DIR		:= obj
SRCS 		:=	\
				main.c push.c make_linked_list.c rotate.c swap.c \
				small_logic.c three_sort.c five_sort.c big_sort.c \
				set_cost.c smallest_large.c \
				utils/utils.c utils/utils2.c 

SRCS        := $(SRCS:%=$(SRC_DIR)/%)
OBJS        := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC 			:= gcc
RM 			:= rm -f
CFLAGS 		:= -Llibft -lft
OFLAGS 		:= -I libft -Wall -Wextra -Werror
CPP			:= -I include
MAKEFLAGS	+= --no-print-directory
DIR_DUP		= mkdir -p $(@D)
libft 		:= libft/libft.a

all: 		$(NAME)

$(libft):
			make -C libft

$(NAME):	$(OBJS) | $(libft)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
			$(info CREATED $(NAME))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
			$(DIR_DUP)
			$(CC) $(OFLAGS) $(CPPFLAGS) -c -o $@ $<
			$(info CREATED $@)
clean:
			$(RM) $(OBJS)
			make -C libft clean

fclean:		clean
			$(RM) $(NAME)
			make -C libft fclean

re:			
			$(MAKE) fclean
			$(MAKE) all

.PHONY:		all clean fclean re
.SILENT: