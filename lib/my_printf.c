/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** main function
*/

#include "printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int is_modulo(va_list arg, char *strings[2], void (*tab[])(), int i)
{
    int a = 0;
    int x = 0;

    if (strings[0][i + 1] == '%') {
        my_putchar('%');
        x = 2;
    } else {
        ++i;
        for (a = 0; strings[1][a] != strings[0][i]; a++);
        tab[a](va_arg(arg,char *));
        x = 1;
    }
    return x;
}

int my_check(char *strings[2], int i)
{
    int a = 0;

    if (strings[0][i] != '%') {
        return 1;
    }
    if (strings[0][i] == '%' && strings[0][i + 1] == '%')
        return 1;
    for (int check = 0; strings[1][check] != '\0'; check++) {
        if (strings[1][check] == strings[0][i + 1])
            a = 1;
    }
    return a;
}

void my_free(char *strings[2])
{
    free(strings[0]);
    free(strings[1]);
}

int my_printf(char const *str, ...)
{
    va_list arg;
    char *str2 = "dics\0";
    char *strings[2];
    void (*tab[4])() =
            {my_put_nbr, my_put_nbr, my_putchar, my_putstr};

    va_start(arg, str);
    strings[0] = my_strdup(str);
    strings[1] = my_strdup(str2);
    for (int i = 0; strings[0][i] != '\0'; i++) {
        if (my_check(strings, i) == 0)
            return 84;
        if (strings[0][i] == '%' && strings[0][i + 1] != '%')
            i = i + is_modulo(arg, strings, tab, i);
        else
            my_putchar(strings[0][i]);
    }
    va_end(arg);
    my_free(strings);
    return 0;
}
