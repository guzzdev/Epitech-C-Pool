##
## EPITECH PROJECT, 2021
## B-CPE-101-LYN-1-1-finalstumper-louis.olive
## File description:
## Makefile
##

NAME  = final_stumper

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