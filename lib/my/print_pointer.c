/*
** EPITECH PROJECT, 2019
** print_pointer.c
** File description:
** my_printf - B1 - Unix System Programming
*/

#include "my.h"

char *print_pointer(long long index)
{
    char *memo = malloc(64);

    memo = hexa_nbr_x(index);
    return (memo);
}
