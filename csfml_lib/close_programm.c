/*
** EPITECH PROJECT, 2021
** csfml_lib
** FILE description
** close_winfow
*/

#include "my_rpg.h"

static void close_window(sfRenderWindow *window)
{
	my_printf("%s\n", "closing window");
	sfRenderWindow_close(window);
}

static void close_music(sfMusic *music)
{
	my_printf("%s\n", "closing music");
	sfMusic_destroy(music);
}

void close_cond(sfRenderWindow *window, sfMusic *music, sfMusic *music2)
{
	my_printf("%s%s\n", underlined_yellow, "closing programm...");
	close_music(music);
	close_music(music2);
	close_window(window);
	my_printf("%s", RESET);
}
