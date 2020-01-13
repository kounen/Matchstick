/*
** EPITECH PROJECT, 2019
** integer_nbr.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

void integer_nbr(unsigned int nb)
{
    int tmp = 0;

    if (nb > 9) {
        tmp = nb % 10;
        nb = nb / 10;
        integer_nbr(nb);
        my_put_nbr(tmp);
    }
    else
        my_put_nbr(nb);
}
