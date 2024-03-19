SRC = main.c parse.c strdivide.c
OBJ = $(addprefix $O/, $(notdir $(SRC:.c=.o)))
O = obj/

NAME = rush-02

CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f
RMD = /bin/rm -r

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) $^ -o $@

$O/%.o: %.c
	@mkdir -p $(@D)
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RMD) $O
fclean: clean
	$(RM) $(NAME)

re: fclean all
