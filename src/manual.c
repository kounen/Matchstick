/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** manual
*/

#include "matchstick.h"

void manual(void)
{
    my_printf("USAGE\n");
    my_printf("./matchstick <lines> <matches>\n\n");
    my_printf("DESCRIPTION\n");
    my_printf("    lines       positive line number > 1 or < 100\n");
    my_printf("    matches     positive max number matches > 0\n\n");
    my_printf("OPTION\n");
    my_printf("    -h          display the help page\n\n");
    my_printf("GAME PURPOSE\n");
    my_printf("    This game is actually called Marienbad's game. There are 2");
    my_printf(" players, here a human and an AI. The winner is the one who");
    my_printf(" doesn't pull out the last match. In short, the one who loses");
    my_printf(" is the one who takes the last match off the board. The first");
    my_printf(" row always consists of a single match, the number of which");
    my_printf(" increases by two with each row down. The number of rows is");
    my_printf(" chosen according to parameter 1. Parameter 2 corresponds to");
    my_printf(" the maximum number of matches that can be removed in each");
    my_printf(" round. Removed matches will always be removed from right to");
    my_printf(" left. Good game and good luck!\n");
}
