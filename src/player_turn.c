/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** player_turn
*/

#include "matchstick.h"

int player_turn(matchstick_t *structure)
{
    initialise_player_turn(structure);
    if (collect_and_check(structure) == ERROR)
        return (ERROR);
    my_printf("Player removed %d match(es) ", structure->how_matches);
    my_printf("from line %d\n", structure->what_line);
    display_update_board(structure);
    structure->who_is_the_winner = AI_WIN;
    return (SUCCESS);
}
