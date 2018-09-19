/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** prints game board
*/

#include "../include/structures.h"
#include "../lib/my/my.h"

char middle(int j, info_t *info)
{
	char c;

	if (j == 0 || j == info->cols - 1)
		c = '*';
	else if (j >= info->matchl && j <= info->matchr) {
		c = '|';
		info->matches++;
	} else
		c = ' ';
	return (c);
}

char make_board(int i, int j, info_t *info)
{
	char c;

	if (i == 0 || i == info->rows - 1)
		c = '*';
	else
		c = middle(j, info);
	return (c);
}

char **print_game_board(info_t *info)
{
	char **board = malloc(sizeof(char *) * (info->cols + 1));

	info->matches = 0;
	info->matchl = info->cols / 2;
	info->matchr = info->cols / 2;
	for (int i = 0; i < info->rows; i++) {
		board[i] = malloc(sizeof(char) * (info->cols + 1));
		for (int j = 0; j < info->cols; j++)
			board[i][j] = make_board(i, j, info);
		if (i > 0) {
			info->matchl--;
			info->matchr++;
		}
		my_printf("%s\n", board[i]);
	}
	return (board);
}
