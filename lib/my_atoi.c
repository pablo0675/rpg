/*
** EPITECH PROJECT, 2021
** lib
** FILE description
** atoi
*/

int my_atoi(char *av)
{
    int i = 0;

    for (int a = 0; av[a] != '\0'; a++) {
        if (av[a] >= '0' && av[a] <= '9') {
            i *= 10;
            i += av[a] - '0';
        } else
            return (i);
    }
    return (i);
}