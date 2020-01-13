/*
** EPITECH PROJECT, 2019
** my_printf.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

void my_printf(char *str, ...)
{
    va_list list;
    int i = 0;

    va_start(list, str);
    for (; str[i]; i++) {
        if (str[i] == '%') {
            switch_letter_one(str, i, list);
            i = i + 1;
        }
        else
            my_putchar(str[i]);
    }
    va_end(list);
}
