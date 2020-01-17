/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "matchstick.h"

int main(int argc, char *argv[])
{
    matchstick_t *structure = malloc(sizeof(matchstick_t));
    int who_win = 0;

    if (check_error_and_manual(argc, argv) == ERROR)
        return (ERROR);
    initialise_structure(structure, argv);
    create_game_board(structure);
    display_game_board(structure->nbr_lines);
    srandom(time(NULL));
    who_win = game_loop(structure);
    destroy_structure(structure);
    return (who_win);
}
