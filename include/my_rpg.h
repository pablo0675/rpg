/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** rpg
*/

#ifndef MY_RPG_MY_RPG_H
    #define MY_RPG_MY_RPG_H
    #include "../lib/printf.h"
    #include "../csfml_lib/my_csfml.h"

typedef struct flag_s
{
    char **save;
    int s;
    int help;
} flag_t;

typedef struct game_s
{
    background_t *map;
    my_clock_t *Clock;
    sprite_t *player;
    window_t *window;
    text_t *text;
    flag_t *flags;
} game_t;

void free_struct(game_t *g);
int my_rpg(int ac, char **av);
game_t *init_struct(game_t *g);
void print_logo();

#endif //MY_RPG_MY_RPG_H
