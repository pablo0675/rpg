/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "printf.h"

void my_put_nbr(long long nb)
{
    long long nb2 = (long long)nb;
    if (nb2 < 0) {
        my_putchar('-');
        nb2 = nb2 * (-1);
    }
    if (nb2 >= 10)
        my_put_nbr(nb2 / 10);
    my_putchar((nb2 % 10) + '0');
}
