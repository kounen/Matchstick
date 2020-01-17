/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** collect
*/

#include "matchstick.h"

/*char *collect_stdin(void)
{
    char *input = NULL;
    size_t input_size = 0;

    if (getline(&input, &input_size, stdin) == -1)
        input = NULL;
    else
        input[my_strlen(input) - 1] = '\0';
    return (input);
}*/

/*int check_collect_line(matchstick_t *structure)
{
    ;
}

int check_collect_matches(matchstick_t *structure)
{
    ;
}

void collect_and_check(matchstick_t *structure)
{
    char *input = NULL;

    while (1) {
        my_printf("Line: ");
        input = collect_stdin();
        if (my_str_isnum(input) == 0)
            my_printf("Error: invalid input (positive number expected)\n");
        if (input == NULL)
            return (SUCCESS);
        structure->what_line = my_atoi(input);
        if (structure->what_line > structure->nbr_lines ||
        structure->what_line <= 0) {
            my_printf("Error: this line is out of range\n");
    }
    }
}*/

/*int check_collect_line(matchstick_t *structure)
{
    if (structure->what_line > structure->nbr_lines ||
        structure->what_line <= 0) {
        my_printf("Error: this line is out of range\n");
        return (TRUE);
    }
    return (SUCCESS);
}

int check_collect_matches(matchstick_t *structure)
{
    if (structure->how_matches > structure->max_matches) {
        my_printf("Error: you cannot remove more than ");
        my_printf("%d matches per turn\n", structure->max_matches);
        return (TRUE);
    } if (structure->how_matches <= 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (TRUE);
    } if (structure->how_matches >
        structure->game_board[structure->what_line - 1]) {
        my_printf("Error: not enough matches on this line\n");
        return (TRUE);
    }
    return (SUCCESS);
}

void collect_and_check(matchstick_t *structure)
{
    do {
        do {
            my_printf("Line: ");
            structure->what_line = my_atoi(collect_stdin());
        } while (check_collect_line(structure) == TRUE);
        my_printf("Matches: ");
        structure->how_matches = my_atoi(collect_stdin());
    } while (check_collect_matches(structure) == TRUE);
}*/

int collect_input(char **input, size_t *size, int print_message)
{
    free(*input);
    *input = NULL;
    if (print_message == 1)
        my_printf("Line: ");
    else
        my_printf("Matches: ");
    return (getline(input, size, stdin));
}

int check_collect_line(matchstick_t *structure, char *input)
{
    if (my_str_isnum(input) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (ERROR);
    } if (my_atoi(input) > structure->nbr_lines ||
        my_atoi(input) <= 0) {
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
    } if (my_atoi(input) >
        structure->game_board[structure->what_line - 1]) {
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
        if (collect_input(&input, &size, 1) < 0)
            return (ERROR);
        if (check_collect_line(structure, input) == ERROR)
            continue;
        structure->what_line = my_atoi(input);
        if (collect_input(&input, &size, 2) < 0)
            return (ERROR);
        if (check_collect_matches(structure, input) == ERROR)
            continue;
        structure->how_matches = my_atoi(input);
        free(input);
        break;
    } while (TRUE);
    return (SUCCESS);
}


















  /*  int test;

    do {
        do {
            my_printf("Line: ");
            input = collect_stdin();
            test = check_collect_line(structure, input);
            if (check_collect_line(structure, input) == SUCCESS)
                return (SUCCES);
        } while (test == TRUE);
        structure->what_line = my_atoi(input);
        my_printf("Matches: ");
        input = collect_stdin();
    } while (check_collect_matches(structure, input) == TRUE);
    structure->how_matches = my_atoi(input);
}*/
