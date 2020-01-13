/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    dest = my_strcpy(dest, src);
    return (dest);
}
