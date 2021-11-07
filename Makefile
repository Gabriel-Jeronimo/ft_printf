NAME=libftprintf.a

CC=clang

CFLAGS=-Wall -Wextra -Werror

SRC= ft_printf.c print_char.c print_number.c printf_utils.c print_hexadecimal.c print_pointer.c print_string.c

RM=rm -f

OBJ=$(SRC:.c=.o)

$(NAME): ft_printf.h
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean