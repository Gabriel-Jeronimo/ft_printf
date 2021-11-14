NAME=libftprintf.a

CC=clang

LIBFT = libft

CFLAGS=-Wall -Wextra -Werror

SRC= ft_printf.c print_char.c print_number.c print_hexadecimal.c printf_utils.c 

RM=rm -f

OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re: fclean all

PHONY: clean fclean