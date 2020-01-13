/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_show_word_array
*/

#include "my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++)
        my_printf("%s\n", tab[i]);
    return (0);
}
