SRC = main.c check_valid.c check_square.c map_read.c
OBJ = $(addprefix $O/, $(notdir $(SRC:.c=.o)))
O = obj/

NAME = bsq
CC = cc
FLAGS = -Wall -Werror -Wextra

RM = /bin/rm -f
RMD =  /bin/rm -r

.PHONY: all clean fclean re

all: $(NAME):

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $^ -o $@

$O/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RMD) $O

fclean: clean
	$(RM) $(NAME)

re: fclean all
