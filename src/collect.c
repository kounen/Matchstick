/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** collect
*/

#include "matchstick.h"

int collect_input(char **input, size_t *size, int print_message)
{
    free(*input);
    *input = NULL;
    (print_message == 1) ? my_printf("Line: ") : my_printf("Matches: ");
    return (getline(input, size, stdin));
}

int check_collect_line(matchstick_t *structure, char *input)
{
    if (my_str_isnum(input) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (ERROR);
    } if (my_atoi(input) > structure->nbr_lines || my_atoi(input) <= 0) {
        my_printf("Error: this line is out of range\n");
        return (ERROR);
    }
    return (SUCCESS);
}

int check_collect_matches(matchstick_t *structure, char *input)
{
    if (my_str_isnum(input) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (ERROR);
    } if (my_atoi(input) > structure->max_matches) {
        my_printf("Error: you cannot remove more than ");
        my_printf("%d matches per turn\n", structure->max_matches);
        return (ERROR);
    } if (my_atoi(input) <= 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (ERROR);
    } if (my_atoi(input) > structure->game_board[structure->what_line - 1]) {
        my_printf("Error: not enough matches on this line\n");
        return (ERROR);
    }
    return (SUCCESS);
}

int collect_and_check(matchstick_t *structure)
{
    char *input = NULL;
    size_t size = 0;

    do {
        if (collect_input(&input, &size, 1) == -1)
            return (ERROR);
        if (check_collect_line(structure, input) == ERROR)
            continue;
        structure->what_line = my_atoi(input);
        if (collect_input(&input, &size, 2) == -1)
            return (ERROR);
        if (check_collect_matches(structure, input) == ERROR)
            continue;
        structure->how_matches = my_atoi(input);
        free(input);
        break;
    } while (1);
    return (SUCCESS);
}
