/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** ia file
*/

#include "../include/structures.h"

int line_match(info_t *info, plays_t *plays, char **board)
{
	int lineMatches = 0;

	for (int i = info->cols; i > 0; i--)
		if (board[plays->line][i] == '|')
			lineMatches++;
	return (lineMatches);
}

void ask_ai(info_t *info, plays_t *plays, char **board)
{
	int lineMatches = 0;

	my_printf("\nAI's turn...\n");
	plays->line = 0;
	plays->out = 0;
	while (lineMatches == 0 || plays->line == 0) {
		plays->line = random() % (info->rows - 1);
		if (plays->line > 0)
			lineMatches = line_match(info, plays, board);
	}
	if (lineMatches > info->maxMatches) {
		while (plays->out == 0)
			plays->out = random() % info->maxMatches;
	} else {
		if (lineMatches == 1)
			plays->out = 1;
		while (plays->out == 0)
			plays->out = random() % lineMatches;
	}
	info->matches -= plays->out;
}
