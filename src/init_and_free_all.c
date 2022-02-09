/*
** EPITECH PROJECT, 2021
** my_rpg
** FILE description
** init and free
*/

#include "../include/my_rpg.h"

game_t *init_struct(game_t *g)
{
    g->Clock = malloc(sizeof(clock_t));
    g->flags = malloc(sizeof(flag_t));
    g->player = malloc(sizeof(sprite_t));
    g->window = malloc(sizeof(window_t));
    g->map = malloc(sizeof(background_t));
    g->text = malloc(sizeof(text_t));
    g->flags->s = 0;
    g->flags->help = 0;
}

void free_struct(game_t *g)
{
    free(g->flags);
    free(g->text);
    free(g->player);
    free(g->map);
    free(g->Clock);
    free(g->window);
    free(g);
}