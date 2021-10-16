##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## 
##

SRC = $(shell find . -name '*.c' -type f)

OBJ = $(SRC:.c=.o)

NAMEL = libmy.a

all: $(NAMEL)

$(NAMEL): $(OBJ)
	@gcc -c ../lib/my/$(OBJ)
	@ar rc $(NAMEL) ./lib/my/$(OBJ)
	@cp $(NAMEL) ../$(NAMEL)
	@make clean
	@echo "DONE"

clean : $(shell rm -f $(OBJ))