/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** update
*/

#include "structures.h"

char **take_out(plays_t *plays, int i, char **board)
{
	for (int n = plays->out; n > 0; n--) {
		board[plays->line][i] = ' ';
		i--;
	}
	return (board);
}

int get_i(plays_t *plays, char **board, info_t *info)
{
	int i = info->cols;

	while (board[plays->line][i] != '|')
		i--;
	return (i);
}
