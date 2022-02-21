/*
** EPITECH PROJECT, 2021
** headers
** File description:
** lib
*/

#ifndef MY_CSFML_H
    #define MY_CSFML_H
    #include "csfml_includes.h"
    #include "game_struct.h"
    #include <SFML/System.h>

game_t *my_create_window(int height, int width, char *name, game_t *game);
sfSprite *my_init_sprite(sprite_t *sprite, char *name);
void put_text(const char *word, int x,
              int y, sfRenderWindow *window);
sprite_t *my_init_pos(sprite_t *sprite, int x, int y);
sprite_t *my_init_rect(sprite_t *sprites, int rectangle[4]);
sfSprite *my_init_background(background_t *sprites);
void close_cond(game_t *game);
sfIntRect simple_int_rect(int x, int y, int width, int height);
sprite_t *create_sprite_rect(const sfIntRect rect, sprite_t *player);
background_t *background_rect(const sfIntRect rect, background_t *background);

#endif /* !MY_CSFML_H_ */