/*
** EPITECH PROJECT, 2021
** 
** FILE description
** 
*/

#include "my_csfml.h"

void put_text(const char *word, int x,
			  int y, sfRenderWindow *window)
{
	sfFont        *font;
	sfText        *text;
	sfVector2f pos;

	pos.y = y;
	pos.x = x;
	font = sfFont_createFromFile("files/arial.ttf");
	text = sfText_create();
	sfText_setString(text, word);
	sfText_setFont(text, font);
	sfText_setColor(text, sfRed);
	sfText_setCharacterSize(text, 24);
	sfText_setPosition(text, pos);
	sfRenderWindow_drawText(window, text, NULL);
	sfText_destroy(text);
	sfFont_destroy(font);
}
