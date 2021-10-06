/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** putchar
*/

void my_putchar(char c){
    write(1, &c, 1);
}

int my_put_nbr(int nb){
    
}

void main(void){
    my_put_nbr(42);
    my_put_nbr(-2147483647);
}