/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** rpg_logo
*/

#include "../include/my_rpg.h"

void print_logo()
{
    my_printf("%sMADE BY : \n"
              "         Clement Martin,\n"
              "         Stanislas Commenge,\n"
              "         Pablo Levy\n", BLUE, RESET);
    my_printf("%s         /\\_____/\\\n"
              "        /  o   o  \\\n"
              "       ( ==  ^  == )\n"
              "        )         (\n"
              "       (           )\n"
              "      ( (  )   (  ) )\n"
              "     (__(__)___(__)__)%s\n", RED, RESET);
}