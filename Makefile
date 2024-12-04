##
## EPITECH PROJECT, 2024
## makefile
## File description:
## printf
##

SRC	=	my_printf.c\
		mod_struct.c\
		my_specifier_fun.c\
		my_specifier_fun2.c\
		my_specifier_fun3.c\
		precision.c\
		width.c\
		width2.c\
		conversion_x.c\
		conversion_x_up.c\
		conversion_o.c\
		conversion_f.c\
		conversion_e_up.c\
		conversion_e.c\
		my_compute_square_root.c\
		my_revstr.c \
		my_str_isalpha.c\
		my_strncmp.c\
		my_find_prime_sup.c\
		my_showmem.c \
		my_str_islower.c \
		my_strncpy.c \
		my_getnbr.c \
		my_showstr.c \
		my_str_isnum.c\
            my_strstr.c\
            my_isneg.c\
            my_sort_int_array.c \
            my_str_isprintable.c \
            my_strupcase.c \
            my_is_prime.c \
            my_strcapitalize.c\
            my_str_isupper.c\
            my_swap.c\
            my_putchar.c \
            my_strcat.c \
            my_strlen.c  \
            my_putnbr.c \
	    my_strcmp.c \
          my_strlowcase.c \
	my_putstr.c \
	my_strcpy.c \
	my_strncat.c \
	my_numlen.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-w -Wall -Wextra -Werror -I./include -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		gcc -o unit_test $(SRC) tests/test.c --coverage -lcriterion
		rm $(OBJ)
clean:
	rm -f *.o
	rm -f *.gcno
	rm -f *.gcda
fclean: clean
	rm -f *.a
	rm -f $(NAME)

re: fclean all
