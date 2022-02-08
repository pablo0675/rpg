/*
** EPITECH PROJECT, 2021
** headers
** File description:
** lib
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
	#define RESET "\033[0m"
	#define BISGREEN "\033[1m\033[32m"
	#define YELLOW "\033[33m"
	#define BLUE "\033[34m"
	#define MAGENTA "\033[35m"
	#define CYAN "\033[36m"
	#define BLUE "\033[34m"
	#define RED "\033[31m"
	#define BISRED "\033[1m\033[31m"

void my_putchar(char c);
int my_strlen(char const *str);
void my_put_nbr(long long nb);
char *my_revstr(char *str);
void my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src, int len);
char **my_str_to_array(char *str, char delimiter);
int my_strcmp(char const *s1, char const *s2, int n);
char *my_strdup(char const *str);
int my_printf(char const *str, ...);
int my_atoi(char *av);
char *my_strndup(char const *str, int n);
void free_array(char **array);
void print_array(char **array);
char *my_strcat(char *dest, char const *src);
void my_puterror(char const *str);

#endif /* !MY_H_ */
