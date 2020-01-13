/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_print_error
*/

#include "my.h"

void my_print_error(char *string)
{
    write(2, string, my_strlen(string));
}
