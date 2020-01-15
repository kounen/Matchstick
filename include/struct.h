/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct matchstick
{
    int nbr_lines;
    int max_matches;
    int what_line;
    int how_matches;
    int *game_board;
} matchstick_t;

#endif /* !STRUCT_H_ */
