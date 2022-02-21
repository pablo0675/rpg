/*
** EPITECH PROJECT, 2021
** rpg
** FILE description
** rpg
*/

#ifndef RPG_GAME_STRUCT_H
    #define RPG_GAME_STRUCT_H
    #include "csfml_includes.h"

typedef struct flag_s {
    char **save;
    int s;
    int help;
} flag_t;



typedef struct sound_s {
    sfSound *hit;
    sfSound *miss;
    sfSound *lost;
    sfSound *won;
} sound_t;

typedef struct window_s {
    sfRenderWindow *window;
    int width;
    int height;
    char *title;
    sfVector2i mouse;
    sfMusic **filepath_sound;
    char **filepath_sprite;
} window_t;

typedef struct my_clock_s {
    sfClock *Clock;
    sfTime Time;
} my_clock_t;

typedef struct background_s {
    sfVector2f pos;
    sfVector2f scale;
    char *filepath;
    sfSprite *sprite;
    sfTexture *texture;
} background_t;

typedef struct sprite_s {
    sfVector2f pos;
    sfVector2f scale;
    char *filepath;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
} sprite_t;

typedef struct object_s {
    int nb;
    int type;
    int name;
    sprite_t *sword;
    sprite_t *food;
    sprite_t *water;
} object_t;

typedef struct text_s {
    sfVector2f pos;
    sfVector2f scale;
    char *text;
    sfFont *police;
    sfText *stext;
    sfRenderStates *state;
} text_t;

typedef struct music_s {
    sfMusic *menu;
    sfMusic *fights;
    sfMusic *game;
    sound_t *sound;
} music_t;

typedef struct game_s {
    background_t *map;
    my_clock_t *Clock;
    sprite_t *player;
    window_t *window;
    text_t *text;
    flag_t *flags;
    music_t *music;
    object_t *obj;
} game_t;

#endif //RPG_GAME_STRUCT_H
