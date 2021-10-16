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
	rm -f ../lib/libmy.a
	gcc -c ../lib/my/*.c
	mv *.o ../lib/my/
	ar rc ../lib/my/$(NAMEL) ../lib/my/*.o
	mv ../lib/my/$(NAMEL) ../lib/$(NAMEL)
	make clean
	echo "DONE"

clean : 
	rm -f ../lib/my/*.o