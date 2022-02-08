/*
** EPITECH PROJECT, 2021
** csfml lib
** FILE description
** sprite rect
*/

#include "my_csfml.h"

sprite_t *create_sprite_rect(const sfIntRect rect, sprite_t *player)
{
	player->texture = sfTexture_createFromFile(player->filepath, &rect);
	player->sprite = sfSprite_create();
	sfSprite_setTexture(player->sprite, player->texture, sfTrue);
	return (player);
}

background_t *background_rect(const sfIntRect rect, background_t *background)
{
	background->texture = sfTexture_createFromFile(background->filepath, &rect);
	background->sprite = sfSprite_create();
	sfSprite_setTexture(background->sprite, background->texture, sfTrue);
	return (background);
}

sfIntRect simple_int_rect(int x, int y, int width, int height)
{
	sfIntRect rect;

	rect.left = x;
	rect.top = y;
	rect.width = width;
	rect.height = height;
	return rect;
}
