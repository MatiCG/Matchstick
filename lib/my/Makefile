##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile lib
##

RM	=	rm -f

AR	=	ar rc

SRC	=	my_getnbr.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strcpy.c		\
		my_revstr.c		\
		my_strlen.c		\
		my_printf.c		\
		flags1.c		\
		convert.c		\
		get_next_line.c		\
		my_strcat.c		\

OBJS	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY : clean fclean re
