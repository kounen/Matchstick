/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "matchstick.h"

char *collect_stdin(void)
{
    char *input = NULL;
    size_t input_size = 0;

    getline(&input, &input_size, stdin);
    input[my_strlen(input) - 1] = '\0';
    return (input);
}

int check_collect_line(matchstick_t *structure)
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
}

void player_turn(matchstick_t *structure)
{
    initialise_player_turn(structure);
    collect_and_check(structure);
    my_printf("Player removed %d match(es) ", structure->how_matches);
    my_printf("from line %d\n", structure->what_line);
    update_board(structure);
}

int game_loop(matchstick_t *structure)
{
    while (1) {
        my_printf("Your turn:\n");
        player_turn(structure);
        my_printf("AI's turn...\n");
        //ia_turn(structure);
    }
    return (SUCCESS);
}

int main(int argc, char *argv[])
{
    matchstick_t *structure = malloc(sizeof(matchstick_t));
    int who_win = 0;

    if (check_error_and_manual(argc, argv) == ERROR)
        return (ERROR);
    initialise_structure(structure, argv);
    display_game_board(structure->nbr_lines);
    who_win = game_loop(structure);
    destroy_structure(structure);
    return (who_win);
}
