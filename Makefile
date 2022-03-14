NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(shell find . -type f -name "ft_lst*.c")
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
			ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
			ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
			rm -f *.o

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re