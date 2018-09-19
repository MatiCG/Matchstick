##
##EPITECH PROJECT, 2017
## MakeFile description:
## my makefile
##

CPPFLAGS	=	-I include/

CFLAGS		=	-Wall -Wextra -g

TFLAGS		=	-lcriterion --coverage

RM		=	rm -f

NAME		=	matchstick

SRCS		=	src/main.c		\
			src/ai.c		\
			src/check_str.c		\
			src/print_game_board.c	\
			src/update.c		\

TSRC		=	

OBJS		=	$(SRCS:.c=.o)

all: 			$(NAME)

$(NAME):		$(OBJS)
			$(MAKE) -C lib/my/
			$(CC) -o $(NAME) $(OBJS) -Llib/my -lmy $(CFLAGS) $(CPPFLAGS)

test_run:
			$(MAKE) -C lib/my/
			$(CC) $(TFLAGS) $(TSRC) tests/test_utils.c -Llib/my -lmy $(CPPFLAGS)
			./a.out

clean:
			$(RM) $(OBJS)
			cd lib/my/ && $(MAKE) clean
			$(RM) src/*~

fclean: clean
			$(RM) *.gc*
			$(RM) a.out
			$(RM) $(NAME)
			cd lib/my/ && $(MAKE) fclean

re: 			fclean all

.PHONY: 		all clean fclean re
