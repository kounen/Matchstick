/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** display_board
*/

#include "matchstick.h"

void board_line(int nbr_lines)
{
    for (int i = 0; i < (nbr_lines * 2 + 1); i = i + 1)
        write(1, "*", 1);
    write(1, "\n", 1);
}

void board_middle(int nbr_lines)
{
    int match = 1;
    int space = nbr_lines - 1;

    for (int line = 0; line < nbr_lines; line++, match += 2, space -= 1) {
        write(1, "*", 1);
        for (int i = 0; i < space; i = i + 1)
            write(1, " ", 1);
        for (int i = 0; i < match; i = i + 1)
            write(1, "|", 1);
        for (int i = 0; i < space; i = i + 1)
            write(1, " ", 1);
        write(1, "*\n", 2);
    }
}

void display_game_board(int nbr_lines)
{
    board_line(nbr_lines);
    board_middle(nbr_lines);
    board_line(nbr_lines);
    write(1, "\n", 1);
}

void display_update_board(matchstick_t *structure)
{
    int space = structure->nbr_lines - 1;

    structure->game_board[structure->what_line - 1] -= structure->how_matches;
    board_line(structure->nbr_lines);
    for (int line = 0; line < structure->nbr_lines; line++, space = space - 1) {
        write(1, "*", 1);
        for (int i = 0; i < space; i = i + 1)
            write(1, " ", 1);
        for (int i = 0; i < structure->game_board[line]; i = i + 1)
            write(1, "|", 1);
        for (int i = (structure->game_board[line] + space); i < (structure->nbr_lines * 2 - 1); i = i + 1)
            write(1, " ", 1);
        write(1, "*\n", 2);
    }
    board_line(structure->nbr_lines);
    write(1, "\n", 1);
}
