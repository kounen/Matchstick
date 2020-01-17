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
#define PLAYER_WIN (1)
#define AI_WIN (2)

/*BEFORE_ALGO*/
int check_error_and_manual(int ac, char **argv);
void manual(void);
////////////////////////////////////////////////////////////////////////////////

/*MAIN_FUNCTION*/
void initialise_structure(matchstick_t *structure, char **argv);
void create_game_board(matchstick_t *structure);
void board_line(int nbr_lines);
void display_game_board(int nbr_lines);
int game_loop(matchstick_t *structure);
int is_there_a_winner(matchstick_t *structure);
void destroy_structure(matchstick_t *matchstick);
////////////////////////////////////////////////////////////////////////////////

/*PLAYER_TURN*/
int player_turn(matchstick_t *structure);
void initialise_player_turn(matchstick_t *structure);
int collect_input(char **input, size_t *size, int print_message);
int collect_and_check(matchstick_t *structure);
int check_collect_line(matchstick_t *structure, char *input);
int check_collect_matches(matchstick_t *structure, char *input);
void display_update_board(matchstick_t *structure);
////////////////////////////////////////////////////////////////////////////////

/*AI_TURN*/
void ai_turn(matchstick_t *structure);
void find_ai_values(matchstick_t *structure);
void find_ai_line(matchstick_t *structure);
void find_ai_matches(matchstick_t *structure);
void display_update_board_ai(matchstick_t *structure);
////////////////////////////////////////////////////////////////////////////////

#endif /* !MATCHSTICK_H_ */
