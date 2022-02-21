##
## EPITECH PROJECT, 2021
## BSQ
## File description:
## Makefile
##

CC 	        = gcc

SRC                     =       main.c
SRC                     +=      src/my_rpg.c
SRC                     +=      src/init_and_free_all.c
SRC                     +=      src/rpg_logo.c
SRC                     +=      src/game_menu/game_menu.c
SRC                     +=      src/menu/menu.c
SRC                     +=      csfml_lib/close_programm.c
SRC                     +=      csfml_lib/my_create_text.c
SRC                     +=      csfml_lib/my_create_window.c
SRC                     +=      csfml_lib/sprite_create.c
SRC                     +=      csfml_lib/sprite_rect.c

OBJ         =   $(SRC:.c=.o)

NAME        =   my_rpg

CFLAGS      +=  -Wall -Wextra

CPPFLAGS    +=  -I./include/ -I./lib/ -I./csfml_lib/

LDFLAGS     =   -L ./lib -lmy -g

CSFML_FLAGS = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all: Makelib $(NAME) message

message:
		@echo -e "\n\e[92mThe programm has been successfully compiled\e[0m"

$(NAME):    $(OBJ)
	$(CC)  $(OBJ) -o $(NAME) $(LDFLAGS) $(CSFML_FLAGS) $(LIB)

Makelib:
	make -C lib

clean:
	(cd src && rm *.o)
	(cd csfml_lib && rm *.o)
	rm *.o
	@echo -e "\n    All .o deleted        "
fclean:
	(rm $(NAME))
	make fclean -C lib

re: clean all

.PHONY: clean fclean re all Makelib message tests_run