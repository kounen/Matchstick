/*
** EPITECH PROJECT, 2020
** my_itoa.c
** File description:
** MY_LIBRARY
*/

#include "my.h"

char *my_itoa(int number)
{
    char *string = NULL;
    int j = number;
    int i = 0;

    while (j != 0) {
        j = j / 10;
        i = i + 1;
    }
    string = malloc(sizeof(char) * (i + 1));
    string[i] = '\0';
    i--;
    for (; i >= 0; i--, number /= 10)
        string[i] = number % 10 + '0';
    return (string);
}
