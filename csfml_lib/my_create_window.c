/*
** EPITECH PROJECT, 2021
** csfml_lib
** FILE description
** create_window
*/

#include "my_csfml.h"
#include <stdlib.h>

sfRenderWindow *my_create_window2(char *name, int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode mode;
    int flags = sfClose | sfTitlebar | sfResize;

    mode.height = height;
    mode.width = width;
    mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(mode, name, flags, NULL);
    return (window);
}

sfRenderWindow *my_create_window(int height, int width, char *name)
{
    window_t *window;

    window = malloc(sizeof(window_t));
    if (window == NULL) {
	    return (NULL);
    }
    window->height = height;
    window->width = width;
    window->window = my_create_window2(name, window->width, window->height);
    return (window->window);
}



