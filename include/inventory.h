/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** inventory
*/

#ifndef RPG_INVENTORY_H
    #define RPG_INVENTORY_H
    #include "../csfml_lib/my_csfml.h"
    #include "../lib/printf.h"

typedef struct object_s {
    int nb;
    int type;
    int name;
    sprite_t *sword;
    sprite_t *food;
    sprite_t *water;
} object_t;
#endif //RPG_INVENTORY_H
