/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** putchar
*/
#include <unistd.h>

void my_putchar(char c){
    write(1, &c, 1);
}

int my_put_nbr(int nb){
    return 0;
}

void main(void){
    my_put_nbr(42);
    my_put_nbr(-2147483647);
}