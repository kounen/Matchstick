/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "matchstick.h"

void player_turn(matchstick_t *structure)
{
    initialise_player_turn(structure);
    collect_and_check(structure);
    my_printf("Player removed %d match(es) ", structure->how_matches);
    my_printf("from line %d\n", structure->what_line);
    display_update_board(structure);
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
    create_game_board(structure);
    display_game_board(structure->nbr_lines);
    who_win = game_loop(structure);
    destroy_structure(structure);
    return (who_win);
}
