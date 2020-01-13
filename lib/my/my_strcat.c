/*
** EPITECH PROJECT, 2020
** MY_LIBRARY
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *string_one, char *string_two)
{
    int len_one = my_strlen(string_one);
    int len_two = my_strlen(string_two);
    char *destination = malloc(sizeof(char) * (len_one + len_two + 1));

    if (string_one == NULL)
        return (string_two);
    if (string_two == NULL)
        return (string_one);
    if (destination == NULL)
        return (NULL);
    for (int i = 0; i < len_one; i++)
        destination[i] = string_one[i];
    for (int i = 0; i < len_two; i++)
        destination[i + len_one] = string_two[i];
    destination[len_one + len_two] = '\0';
    return (destination);
}
