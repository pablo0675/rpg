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
        g->flags->help = 1;
    }
    if (my_strcmp(str, "-s", 2) == 0 && g->flags->s != 1) {
        fill_save(str2, g);
        g->flags->s = 1;
    }
    return g;
}

int my_rpg(int ac, char **av)
{
    game_t *g = malloc(sizeof(game_t));

    init_struct(g);
    for (int i = 0; av[i] != NULL; i++)
        parse_flag(av[i], g, av[i + 1]);
    free_struct(g);
    return 0;
}