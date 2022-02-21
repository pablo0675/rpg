/*
** EPITECH PROJECT, 2021
** lib
** FILE description
** print_array
*/

void print_array(char **array)
{
    for (int i = 0; array[i]; i++)
        for (int x = 0; array[i][x]; x++)
            my_putchar(array[i][x]);
        my_putchar('\n');
    }
}