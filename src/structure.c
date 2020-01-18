/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** structure
*/

#include "matchstick.h"

void initialise_structure(matchstick_t *structure, char **argv)
{
    structure->nbr_lines = my_atoi(argv[1]);
    structure->max_matches = my_atoi(argv[2]);
    structure->game_board = NULL;
    structure->who_is_the_winner = 0;
    structure->what_line_ai = 0;
    structure->how_matches_ai = 0;
}

void initialise_player_turn(matchstick_t *structure)
{
    structure->what_line = 0;
    structure->how_matches = 0;
}

void create_game_board(matchstick_t *structure)
{
    int matches_nbr = 1;

    structure->game_board = malloc(sizeof(int) * (structure->nbr_lines + 1));
    structure->game_board[0] = 1;
    for (int line = 1; line < structure->nbr_lines; line = line + 1) {
        matches_nbr = matches_nbr + 2;
        structure->game_board[line] = matches_nbr;
    }
    structure->game_board[structure->nbr_lines] = '\0';
}

void destroy_structure(matchstick_t *structure)
{
    free(structure->game_board);
    free(structure);
}
