/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** rpg
*/

#include "../include/my_rpg.h"

game_t *fill_save(char *str2, game_t *g)
{
    return g;
}

game_t *parse_flag(char *str, game_t *g, char *str2)
{
    if (g->flags->help == 1)
        return NULL;
    if (my_strcmp(str, "-h", 2) == 0) {
        my_printf("             %smy_rpg%s\n\n", underlined_yellow, RESET);
        my_printf("%sUSAGE%s:       ./my_rpg\n", RED, RESET);
        my_printf("             -s save file\n");
        my_printf("             -h for help\n");
        //my_printf("             -m for map\n");
        g->flags->help = 1;
    }
    if (my_strcmp(str, "-s", 2) == 0 && g->flags->s != 1) {
        fill_save(str2, g);
        g->flags->s = 1;
    }
    return g;
}

void my_loop(game_t *g)
{
    sfEvent event;

    my_create_window(1080, 1920, "castlevachat", g);
    sfRenderWindow_setFramerateLimit(g->window->window, 45);
    sfRenderWindow_clear(g->window->window, sfBlack);
    while (sfRenderWindow_isOpen(g->window->window) ||
        sfRenderWindow_pollEvent(g->window->window, &event)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape)|| event.type == sfEvtClosed)
            free_struct(g);
        my_printf("%sloop\n%s", RED, RESET);
        my_printf("%smenu\n%s", RED, RESET);
        my_printf("%sgame\n%s", RED, RESET);
        sfRenderWindow_display(g->window->window);
    }
}

int my_rpg(int ac, char **av)
{
    game_t *g = malloc(sizeof(game_t));

    if (g == NULL)
        return 0;
    if (init_struct(g) == NULL)
        return 0;
    for (int i = 0; av[i] != NULL; i++)
        parse_flag(av[i], g, av[i + 1]);
    my_loop(g);
    free_struct(g);
    return 0;
}