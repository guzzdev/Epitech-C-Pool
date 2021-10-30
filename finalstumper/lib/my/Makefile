##
## EPITECH PROJECT, 2021
## B-CPE-101-LYN-1-1-finalstumper-louis.olive
## File description:
## Makefile
##

NAME = libmy.a

CC = gcc

RM = rm -f

SRC	= $(shell find . -type f -name '*.c')

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	 @$(CC) -c $(SRC)
	 @ar rc $(NAME) $(OBJ)
	 @make clean
	 echo "Lib built"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
