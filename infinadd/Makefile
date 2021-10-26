##
## EPITECH PROJECT, 2021
## B-CPE-101-LYN-1-1-infinadd-louis.olive
## File description:
## Makefile
##

NAME  = infin_add

CC	= gcc

RM	= rm -f

SRC	= *.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L ./lib/my/ -lmy

all: $(NAME)

$(NAME):
	@cd lib/my && make re
	@$(CC) $(SRC) -o $(NAME) $(LIBFLAG)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
