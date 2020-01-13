/*
** EPITECH PROJECT, 2019
** binary_nbr.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

int binary_nbr(int nb)
{
    int tmp = nb;
    int i = 0;
    char *str = NULL;
    int nbr = 0;

    str = malloc(sizeof(char) * unit_size(nb) + 1);
    while (nb > 0) {
        tmp = nb % 2;
        str[i] = tmp + 48;
        nb = nb / 2;
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
    nbr = my_atoi(str);
    free (str);
    return (nbr);
}
