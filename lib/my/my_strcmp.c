/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *str_one, char const *str_two)
{
    int i = 0;

    for (; str_one[i] && str_two[i] && (str_one[i] == str_two[i]); i = i + 1);
    return (str_one[i] - str_two[i]);
}
