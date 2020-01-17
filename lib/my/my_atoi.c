/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** MY_LIBRARY
*/

int my_atoi(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] <= '9' && str[i] >= '0' && \
    str[i] && str[i] != '\n'; i++)
        nbr = nbr * 10 + str[i] - 48;
    return (nbr);
}
