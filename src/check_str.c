/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** check str
*/

#include "../include/structures.h"
#include "../include/prototypes.h"

int check_str(char *str)
{
	int len = my_strlen(str);

	for (int i = 0; i < len - 1; i++)
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}

int check_matches(info_t *info, plays_t *plays, int lineMatches)
{
	if (plays->out == 0) {
		my_printf("Error: you have to remove at least one match\n");
		return (2);
	}
	if (plays->out > info->maxMatches) {
		my_printf("Error: you cannot remove more than %d matches"
		" per turn\n", info->maxMatches);
		return (2);
	} else if (plays->out > lineMatches) {
		my_printf("Error: not enough matches on this line\n");
		return (2);
	}
	return (0);
}
