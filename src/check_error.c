/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** check_error
*/

#include "matchstick.h"

int check_error_and_manual(int argc, char **argv)
{
    if (argc < 2 || argc > 3) {
        my_print_error("ERROR : not enough arguments, check -h.\n");
        return (ERROR);
    } if (my_strcmp(argv[1], "-h\0") == 0) {
        manual();
        return (ERROR);
    } if (my_str_isnum(argv[1]) == 0 || my_str_isnum(argv[2]) == 0) {
        my_print_error("ERROR : argv[1] or argv[2] not a digit, check -h.\n");
        return (ERROR);
    } if (my_atoi(argv[1]) <= 1 || my_atoi(argv[1]) >= 100) {
        my_print_error("ERROR : bad argument one, check -h.\n");
        return (ERROR);
    } if (my_atoi(argv[2]) <= 0) {
        my_print_error("ERROR : bad argument two, check -h.\n");
        return (ERROR);
    }
    return (SUCCESS);
}
