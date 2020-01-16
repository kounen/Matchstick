/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** player_turn
*/

#include "matchstick.h"

void player_turn(matchstick_t *structure)
{
    initialise_player_turn(structure);
    collect_and_check(structure);
    my_printf("Player removed %d match(es) ", structure->how_matches);
    my_printf("from line %d\n", structure->what_line);
    display_update_board(structure);
    structure->who_is_the_winner = AI_WIN;
}
