/*
** EPITECH PROJECT, 2021
** csfml_lib
** FILE description
** create sprites
*/

#include "../include/my_csfml.h"

sprite_t *my_init_rect(sprite_t *sprites, int rectangle[4])
{
    sprites->rect.top = rectangle[0];
    sprites->rect.left = rectangle[1];
    sprites->rect.width = rectangle[2];
    sprites->rect.height = rectangle[3];
    return sprites;
}

sfSprite *my_init_sprite(sprite_t *sprite, char *name)
{
    sprite->sprite = sfSprite_create();
    sprite->texture = sfTexture_createFromFile(name, NULL);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    return sprite->sprite;
}

sfSprite *my_init_background(background_t *backgrounds)
{
    backgrounds->sprite = sfSprite_create();
    backgrounds->texture = sfTexture_createFromFile(backgrounds->filepath,  NULL);
    sfSprite_setTexture(backgrounds->sprite, backgrounds->texture, sfFalse);
    sfSprite_setPosition(backgrounds->sprite, backgrounds->pos);
    sfSprite_scale(backgrounds->sprite, backgrounds->scale);
    return backgrounds->sprite;
}

sprite_t *my_init_pos(sprite_t *sprite, int x, int y)
{
    sprite->pos.x = x;
    sprite->pos.y = y;
    return sprite;
}