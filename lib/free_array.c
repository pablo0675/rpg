/*
** EPITECH PROJECT, 2021
** lib
** FILE description
** free_array
*/

#include "printf.h"

void free_array(char **array)
{
	for (int i = 0; array[i]; i++)
		free(array[i]);
	free(array);
}
