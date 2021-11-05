##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	*.c					\
		*.h					\
		eval_expr/*.c		\
		eval_expr/*.h		\
		error_handling/*.c

OBJ	=	$(SRC:.c&&.h=.o)

NAME	=	calc

all:	$(NAME)

$(NAME):	$(OBJ)	
		gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(NAME)
	$(RM) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
