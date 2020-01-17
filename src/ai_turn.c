/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** ai_turn
*/

#include "matchstick.h"

void find_ai_line(matchstick_t *structure)
{
    int line_ai = 0;

    do {
        srandom(time(NULL));
        line_ai = random() % structure->nbr_lines + 1;
    } while (structure->game_board[line_ai - 1] == 0);
    structure->what_line_ai = line_ai;
}

void find_ai_matches(matchstick_t *structure)
{
    int matches_ai = 0;

    if (structure->game_board[structure->what_line_ai - 1] == 1)
        structure->how_matches_ai = 1;
    else {
        do {
            srandom(time(NULL));
            matches_ai = random() % \
            structure->game_board[structure->what_line_ai - 1] + 1;
        } while (matches_ai == 0 || matches_ai > structure->max_matches);
        if (structure->game_board[structure->what_line_ai - 1] - \
            matches_ai == 0)
            structure->how_matches_ai = matches_ai - 1;
        else
            structure->how_matches_ai = matches_ai;
    }
}

void find_ai_values(matchstick_t *structure)
{
    find_ai_line(structure);
    find_ai_matches(structure);
}

void ai_turn(matchstick_t *structure)
{
    find_ai_values(structure);
    my_printf("AI removed %d match(es) ", structure->how_matches_ai);
    my_printf("from line %d\n", structure->what_line_ai);
    display_update_board_ai(structure);
    structure->who_is_the_winner = PLAYER_WIN;
}
