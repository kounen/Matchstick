/*
** EPITECH PROJECT, 2019
** unit_size.c
** File description:
** my_printf - B1 - Unix System Programming
*/

int unit_size(int nb)
{
    int j = 1;

    while (nb != 0) {
        nb = nb / 10;
        j++;
    }
    return (j);
}
