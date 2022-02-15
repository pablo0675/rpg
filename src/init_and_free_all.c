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
    g->music = malloc(sizeof(music_t));
    g->music->sound = malloc(sizeof(sound_t));
    g->obj = malloc(sizeof(object_t));
    if (g->music == NULL || g->flags == NULL || g->player == NULL || g->map == NULL
        || g->window == NULL || g->text == NULL || g->Clock == NULL || g->obj == NULL)
        return NULL;
    g->flags->s = 0;
    g->flags->help = 0;
    return g;
}

void destroy_music(game_t *g)
{
    sfMusic_destroy(g->music->game);
    sfMusic_destroy(g->music->menu);
    sfMusic_destroy(g->music->fights);
    free(g->music->sound);
}

void destroy_all(game_t *g)
{
    //destroy_music(g);
    sfRenderWindow_destroy(g->window->window);
}

void free_struct(game_t *g)
{
    destroy_all(g);
    free(g->flags);
    free(g->text);
    free(g->player);
    free(g->music);
    free(g->map);
    free(g->Clock);
    free(g->window);
    free(g);
}