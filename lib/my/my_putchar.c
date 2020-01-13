/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** MY_LIBRARY
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
