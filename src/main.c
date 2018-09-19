/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** main file
*/

#include "structures.h"
#include "prototypes.h"
#include "../lib/my/my.h"

void print_board(char **board, info_t *info, plays_t *plays, int player)
{
	if (player == 1) {
		plays->last = 2;
		my_printf("Player removed %d  match(es) from line %d\n",
		plays->out, plays->line);
	} else if (player == 2) {
		plays->last = 1;
		my_printf("AI removed %d  match(es) from line %d\n",
		plays->out, plays->line);
	}
	for (int i = 0; i < info->rows; i++) {
		my_printf("%s\n", board[i]);
	}
}

int ask_matches(info_t *info, plays_t *plays, char **board)
{
	char *str;
	int lineMatches = 0;

	for (int i = info->cols; i > 0; i--)
		if (board[plays->line][i] == '|')
			lineMatches++;
	my_printf("Matches: ");
	str = get_next_line(0);
	if (!str)
		return (1);
	if (check_str(str) == 1) {
		my_printf("Error: invalid input (positive number expected)\n");
		return (2);
	}
	plays->out = my_getnbr(str);
	if (check_matches(info, plays, lineMatches) == 2)
		return (2);
	else {
		info->matches -= plays->out;
		return (0);
	}
}

int ask_line(info_t *info, plays_t *plays, char **board)
{
	char *str;
	int code;

	my_printf("Line: ");
	str = get_next_line(0);
	if (!str)
		return (1);
	if (check_str(str) == 1) {
		my_printf("Error: invalid input (positive number expected)\n");
		return (2);
	}
	plays->line = my_getnbr(str);
	if (plays->line < 1 || plays->line > info->rows - 2) {
		my_printf("Error: this line is out of range\n");
		return (2);
	}
	else {
		code = ask_matches(info, plays, board);
		return (code);
	}
}

void game_start(info_t *info, plays_t *plays)
{
	char **board = print_game_board(info);
	int i;
	int code;

	while (info->matches > 0) {
		code = 4;
		my_printf("\nYour turn:\n");
		while (code != 0 && code != 1)
			code = ask_line(info, plays, board);
		if (code == 1)
			break;
		i = get_i(plays, board, info);
		board = take_out(plays, i, board);
		print_board(board, info, plays, 1);
		if (info->matches == 0)
			break;
		ask_ai(info, plays, board);
		i = get_i(plays, board, info);
		board = take_out(plays, i, board);
		print_board(board, info, plays, 2);
	}
}

int main(int ac, char **av)
{
	info_t info;
	plays_t plays;

	if (ac != 3)
		return (84);
	else {
		info.cols = my_getnbr(av[1]) * 2 + 1;
		info.rows = my_getnbr(av[1]) + 2;
		info.maxMatches = my_getnbr(av[2]);
		game_start(&info, &plays);
		if (plays.last == 1 && info.matches == 0)
			my_printf("I lost...snif... but I'll"
			"get you next time!!\n");
		else if (plays.last == 2 && info.matches == 0)
			my_printf("You lost, too bad...\n");
		if (info.matches == 0)
			return (plays.last);
		return (0);
	}
}
