##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## 
##

SRC = $(shell find . -name '*.c' -type f)

OBJ = $(SRC:.c=.o)

NAMEL = libmy.a

NAMEI = my.h

all: $(NAMEL)

$(NAMEL): $(OBJ)
	gcc -c $(OBJ)
	ar rc $(NAMEL) $(OBJ)
	cp $(NAMEL) ../$(NAMEL)
	cp $(NAMEI) ../../include/$(NAMEI)
	make clean

clean : $(shell rm -f $(OBJ))