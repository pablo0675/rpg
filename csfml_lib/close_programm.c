/*
** EPITECH PROJECT, 2021
** csfml_lib
** FILE description
** close_winfow
*/

#include "../include/my_rpg.h"

static void close_window(game_t *game)
{
    my_printf("%s\n", "closing window");
    sfRenderWindow_close(game->window->window);
}

static void close_sound(game_t *game)
{
    return;
}

static void close_music(game_t *game)
{
    my_printf("%s\n", "closing music");
    sfMusic_destroy(game->music->game);
    sfMusic_destroy(game->music->fights);
    sfMusic_destroy(game->music->menu);
    close_sound(game);
}

void close_cond(game_t *game)
{
    my_printf("%s%s\n", underlined_yellow, "closing programm...");
    close_music(game);
    destroy_all(game);
    my_printf("%s", RESET);
}
