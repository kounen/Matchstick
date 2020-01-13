/*
** EPITECH PROJECT, 2019
** s_str.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

void s_str(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            (str[i] < 32) ? my_putchar('0') : 0;
            (str[i] < 8) ? my_putchar('0') : 0;
            my_put_nbr(octal_nbr(str[i]));
        } else
            my_putchar(str[i]);
    }
}
