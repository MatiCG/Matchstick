/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** prototypes
*/

#ifndef PROTOTYPES_H_
#define PROTOTYPES_H_

char middle(int i, int j, info_t *info);
char make_board(int i, int j, info_t *info);
char **print_game_board(info_t *info);
void ask_ai(info_t *info, plays_t *plays, char **board);
int check_str(char *str);
int check_matches(info_t *info, plays_t *plays, int lineMatches);
int get_i(plays_t *plays, char **board, info_t *info);
char **take_out(plays_t *plays, int i, char **board);

#endif /* PROTOTYPES_H_ */
