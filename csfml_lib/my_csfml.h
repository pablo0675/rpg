/*
** EPITECH PROJECT, 2021
** headers
** File description:
** lib
*/

#ifndef MY_CSFML_H
    #define MY_CSFML_H
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>

typedef struct window_s
{
    sfRenderWindow *window;
    int width;
    int height;
    char *title;
    sfVector2i mouse;
    sfMusic **filepath_sound;
    char **filepath_sprite;
} window_t;

typedef struct my_clock_s
{
    sfClock *Clock;
    sfTime Time;
} my_clock_t;

typedef struct background_s
{
    sfVector2f pos;
    sfVector2f scale;
    char *filepath;
    sfSprite *sprite;
    sfTexture *texture;
} background_t;

typedef struct sprite_s
{
    sfVector2f pos;
    sfVector2f scale;
    char *filepath;
    sfSprite *sprite;
    sfTexture *texture;
	sfIntRect rect;
} sprite_t;

typedef struct text_s
{
    sfVector2f pos;
    sfVector2f scale;
    char *text;
    sfFont *police;
    sfText *stext;
	sfRenderStates *state;
} text_t;

sfRenderWindow *my_create_window(int height, int width, char *name);
sfSprite *my_init_sprite(sprite_t *sprite, char *name);
void put_text(const char *word, int x,
			  int y, sfRenderWindow *window);
sprite_t *my_init_pos(sprite_t *sprite, int x, int y);
sprite_t *my_init_rect(sprite_t *sprites, int rectangle[4]);
sfSprite *my_init_background(background_t *sprites);
void close_cond(sfRenderWindow *window, sfMusic *music, sfMusic *music2);
sfIntRect simple_int_rect(int x, int y, int width, int height);
sprite_t *create_sprite_rect(const sfIntRect rect, sprite_t *player);
background_t *background_rect(const sfIntRect rect, background_t *background);

#endif /* !MY_CSFML_H_ */