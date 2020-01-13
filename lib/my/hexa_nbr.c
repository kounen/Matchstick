/*
** EPITECH PROJECT, 2019
** hexa_nbr.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

char *hexa_nbr_x(long long nb)
{
    long long tmp = 0;
    long long i = 0;
    char *str = NULL;

    str = malloc(64);
    while (nb >= 1) {
        tmp = nb % 16;
        if (tmp >= 10)
            str[i] = tmp - 10 + 97;
        else
            str[i] = tmp + 48;
        nb = nb / 16;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}

char *hexa_capital(int nb)
{
    int tmp = 0;
    int i = 0;
    char *str = NULL;

    str = malloc(sizeof(char) * unit_size(nb) + 1);
    while (nb >= 1) {
        tmp = nb % 16;
        if (tmp >= 10)
            str[i] = tmp - 10 + 65;
        else
            str[i] = tmp + 48;
        nb = nb / 16;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}
