/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** MY_LIBRARY
*/

#include "my.h"

void my_revstr(char *str)
{
    char save = 0;

    for (int i = 0; i < my_strlen(str) / 2; i++) {
        save = str[i];
        str[i] = str[my_strlen(str) - 1 - i];
        str[my_strlen(str) - 1 - i] = save;
    }
}
