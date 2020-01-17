/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** ai_turn
*/

#include "matchstick.h"

void find_ai_line(matchstick_t *structure)
{
    srandom(time(NULL));
    int line_ai = random() % structure->nbr_lines;
    if (structure->game_board[line_ai - 1] == 0)
        find_ai_line(structure);
    else
        structure->what_line_ai = line_ai;
}

void find_ai_matches(matchstick_t *structure)
{
    srand(time(NULL));
    int matches_ai = random() % structure->game_board[structure->what_line_ai - 1];
    if (structure->game_board[structure->what_line_ai - 1] == 1)
        structure->how_matches_ai = structure->game_board[structure->what_line_ai - 1];
    if (matches_ai == 0 || matches_ai > structure->max_matches)
        find_ai_matches(structure);
}

void find_ai_values(matchstick_t *structure)
{
    find_ai_line(structure);
    find_ai_matches(structure);
}

void ai_turn(matchstick_t *structure)
{
    initialise_ai_turn(structure);
    my_printf("AI removed %d match(es) ", structure->how_matches_ai);
    my_printf("from line %d\n", structure->what_line_ai);
    find_ai_values(structure);
    display_update_board_ai(structure);
    structure->who_is_the_winner = PLAYER_WIN;
}
