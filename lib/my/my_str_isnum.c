/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_str_isnum
*/

#include "my.h"

int my_str_isnum(char *string)
{
    for (int i = 0; string[i] != '\0'; i = i + 1)
        if (string[i] < '0' || string[i] > '9')
            return (0);
    return (1);
}
