/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "matchstick.h"

int main(int argc, char *argv[])
{
    /*if (my_strcmp(argv[1], "-h\0") == 0) {
        manual();
        return (SUCCESS);
    }*/
    if (check_error_and_manual(argc, argv) == ERROR)
        return (ERROR);
    else
        my_printf("OK\n");
    return (SUCCESS);
}
