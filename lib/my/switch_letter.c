/*
** EPITECH PROJECT, 2019
** switch_letter.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

int switch_letter_one(char *str, int i, va_list list)
{
    switch (str[i + 1]) {
    case 'i':
        my_put_nbr(va_arg(list, int));
        break;
    case 'd':
        my_put_nbr(va_arg(list, int));
        break;
    case 's':
        my_putstr(va_arg(list, char *));
        break;
    case 'p':
        my_putstr("0x");
        my_putstr(print_pointer(va_arg(list, long long)));
        break;
    default:
        i = switch_letter_two(str, i, list);
        break;
    }
    return (i);
}

int switch_letter_two(char *str, int i, va_list list)
{
    switch (str[i + 1]) {
    case 'o':
        my_put_nbr(octal_nbr(va_arg(list, int)));
        break;
    case 'b':
        my_put_nbr(binary_nbr(va_arg(list, int)));
        break;
    case 'x':
        my_putstr(hexa_nbr_x(va_arg(list, long long)));
        break;
    case 'X':
        my_putstr(hexa_capital(va_arg(list, int)));
        break;
    default:
        i = switch_letter_three(str, i, list);
        break;
    }
    return (i);
}

int switch_letter_three(char *str, int i, va_list list)
{
    switch (str[i + 1]) {
    case 'u':
        integer_nbr(va_arg(list, int));
        break;
    case 'S':
        s_str(va_arg(list, char *));
        break;
    case 'c':
        my_putchar(va_arg(list, int));
        break;
    case '%':
        my_putchar('%');
        i--;
        break;
    default:
        my_putchar('%');
        my_putchar(str[i + 1]);
    }
    return (i);
}
