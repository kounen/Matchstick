/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** matchstick
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include "my.h"
#include "struct.h"

#define SUCCESS (0)
#define ERROR (84)

int check_error_and_manual(int argc, char **argv);
void initialise_structure(matchstick_t *matchstick_structure, char **argv);
void initialise_player_turn(matchstick_t *matchstick_structure);
void destroy_structure(matchstick_t *matchstick);
void display_game_board(int nbr_lines);
void board_middle(int nbr_lines);
void board_line(int nbr_lines);
void manual(void);

#endif /* !MATCHSTICK_H_ */
