/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** is_there_a_winner
*/

#include "matchstick.h"

int is_there_a_winner(matchstick_t *structure)
{
    int empty_line = 0;

    for (int line = 0; line < structure->nbr_lines; line = line + 1)
        (structure->game_board[line] == 0) ? empty_line++ : 0;
    if (empty_line == structure->nbr_lines) {
        if (structure->who_is_the_winner == PLAYER_WIN) {
            my_printf("I lost... snif... but I'll get you next time!!\n");
            return (PLAYER_WIN);
        } else if (structure->who_is_the_winner == AI_WIN) {
            my_printf("You lost, too bad...\n");
            return (AI_WIN);
        }
    } else
        write(1, "\n", 1);
    return (SUCCESS);
}
