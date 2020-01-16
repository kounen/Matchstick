/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game_loop
*/

#include "matchstick.h"

int game_loop(matchstick_t *structure)
{
    while (1) {
        my_printf("Your turn:\n");
        player_turn(structure);
        if (is_there_a_winner(structure) == AI_WIN)
            return (AI_WIN);
        my_printf("AI's turn...\n");
        ai_turn(structure);
        if (is_there_a_winner(structure) == PLAYER_WIN)
            return (PLAYER_WIN);
    }
    return (SUCCESS);
}
