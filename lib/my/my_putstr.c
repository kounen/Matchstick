/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** MY_LIBRARY
*/

#include "my.h"

int my_putstr(char const *str)
{
    if (str != NULL)
        for (int i = 0; str[i]; i++)
            my_putchar(str[i]);
    else
        my_putstr("nothing to print");
    return (0);
}
