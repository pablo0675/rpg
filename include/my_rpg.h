/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** rpg
*/

#ifndef MY_RPG_MY_RPG_H
    #define MY_RPG_MY_RPG_H
    #include "../lib/printf.h"
    #include "my_csfml.h"
    #include "inventory.h"
    #include "game_struct.h"

/*###################   menu gestion      ##################*/
int start_menu(game_t *g);
int game_menu(game_t *g);

/*###################   free and destroy ##################*/
void free_struct(game_t *g);
void free_struct(game_t *g);
void destroy_all(game_t *g);
void destroy_music(game_t *g);

/*###################       init        ###################*/
game_t *init_struct(game_t *g);

/*###################      main         ###################*/
void print_logo();
int my_rpg(int ac, char **av);

/*###################     Inventory     ###################*/

#endif //MY_RPG_MY_RPG_H
