/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "matchstick.h"

char *collect_stdin(void)
{
    char *line = malloc(sizeof(char) * (512 + 1));
    size_t size = 512;

    getline(&line, &size, stdin);
    return (line);
}

void player_turn(matchstick_t *matchstick_structure)
{
    initialise_player_turn(matchstick_structure);
    my_put_nbr(matchstick_structure->what_line);
    my_printf("Line: ");
    matchstick_structure->what_line = my_atoi(collect_stdin());
    my_put_nbr(matchstick_structure->what_line);
}

int game_loop(matchstick_t *matchstick_structure)
{
    while (1) {
        my_printf("Your turn:\n");
        player_turn(matchstick_structure);
        my_printf("AI's turn...\n");
        //ia_turn(matchstick_structure);
    }
    return (SUCCESS);
}

int main(int argc, char *argv[])
{
    matchstick_t *matchstick_structure = malloc(sizeof(matchstick_t));
    int who_win = 0;

    if (check_error_and_manual(argc, argv) == ERROR)
        return (ERROR);
    initialise_structure(matchstick_structure, argv);
    display_game_board(matchstick_structure->nbr_lines);
    who_win = game_loop(matchstick_structure);
    destroy_structure(matchstick_structure);
    return (who_win);
}
