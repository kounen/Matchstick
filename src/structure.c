/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** structure
*/

#include "matchstick.h"

void initialise_structure(matchstick_t *matchstick_structure, char **argv)
{
    matchstick_structure->nbr_lines = my_atoi(argv[1]);
    matchstick_structure->max_matches = my_atoi(argv[2]);
}

void initialise_player_turn(matchstick_t *matchstick_structure)
{
    matchstick_structure->what_line = 0;
    matchstick_structure->how_matches = 0;
}

void destroy_structure(matchstick_t *matchstick)
{
    free(matchstick);
}
