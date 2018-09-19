/*
** EPITECH PROJECT, 2017
** matchstick
** File description:
** structs
*/

#ifndef STRUCTURES_H_
#define STRUCTURES_H_

#include <unistd.h>
#include <stdlib.h>
#include "../lib/my/my.h"
#include <time.h>

struct info
{
	int rows, cols, matchl, matchr, matches;
	int maxMatches;
};

struct plays
{
	int line, out;
	int last;
};

typedef struct info info_t;
typedef struct plays plays_t;

#endif /* STRUCTURES_H_ */
