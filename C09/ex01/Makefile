# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
# Source files and objects
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_putchar.c \
	$(SRCS_DIR)/ft_swap.c \
	$(SRCS_DIR)/ft_putstr.c \
	$(SRCS_DIR)/ft_strlen.c \
	$(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
# Library name
LIB = libft.a
# Rules
all: $(LIB)
$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)
%.o: %.c includes/ft.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(LIB)
re: fclean all
.PHONY: all clean fclean re
