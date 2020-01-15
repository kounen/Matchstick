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
    int stick = 1;
    int space = nbr_lines - 1;

    for (int i = 0; i < nbr_lines; i++, stick = stick + 2, space = space - 1) {
        write(1, "*", 1);
        for (int i = 0; i < space; i = i + 1)
            write(1, " ", 1);
        for (int i = 0; i < stick; i = i + 1)
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
