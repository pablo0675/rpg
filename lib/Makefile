##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	+=	my_putchar.c
SRC	+=	my_strlen.c
SRC	+=	my_putstr.c
SRC	+=  my_put_nbr.c
SRC	+=	my_revstr.c
SRC	+=	my_str_to_array.c
SRC	+=	my_strcmp.c
SRC	+=	my_printf.c
SRC	+=	my_strcpy.c
SRC	+=	my_strdup.c
SRC	+=	free_array.c
SRC	+=	my_atoi.c
SRC	+=	print_array.c
SRC	+=	my_strcat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm $(OBJ)
clean:
	rm -f $(OBJ) -O3

fclean:
	rm $(NAME)

re: fclean all

.PHONY: fclean all clean
