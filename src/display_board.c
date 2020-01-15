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

void display_update_board(matchstick_t *structure)
{
    int space = structure->nbr_lines - 1;

    board_line(structure->nbr_lines);

    int space = board->lines - 1;

	board->stick[board->number_line - 1] -= board->number_matches;
	print_window_of_board(board->lines);
	for (int j = 0; j < board->lines; j++, space -= 1) {
		my_putchar('*');
		for (int i = 0; i != space; i++)
			my_putchar(' ');
		for (int counter = 0; counter != board->stick[j]; counter++)
			my_putchar('|');
		for (int temp = space + board->stick[j];
		temp < (board->lines * 2 - 1); temp++)
			my_putchar(' ');
		my_putstr("*\n");
	}
	print_window_of_board(board->lines);
}
