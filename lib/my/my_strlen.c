/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** MY_LIBRARY
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i = i + 1);
    return (i);
}
