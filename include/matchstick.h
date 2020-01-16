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
#define TRUE (1)

int check_error_and_manual(int ac, char **argv);
char *collect_stdin(void);
int check_collect_line(matchstick_t *structure);
int check_collect_matches(matchstick_t *structure);
void collect_and_check(matchstick_t *structure);
void initialise_structure(matchstick_t *structure, char **argv);
void initialise_player_turn(matchstick_t *structure);
void create_game_board(matchstick_t *structure);
void destroy_structure(matchstick_t *matchstick);
void display_update_board(matchstick_t *structure);
void display_game_board(int nbr_lines);
void board_line(int nbr_lines);
void manual(void);

#endif /* !MATCHSTICK_H_ */
