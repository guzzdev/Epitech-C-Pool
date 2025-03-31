/*
** EPITECH PROJECT, 2021
** my_print_comb
** File description:
** Tree different digits numbers
*/
#include <unistd.h>

void my_result(int first_number, int second_number, int third_number)
{
    my_putchar(first_number + 48);
    my_putchar(second_number + 48);
    my_putchar(third_number + 48);
    if (first_number != 7){
        my_putchar(',');
        my_putchar(' ');
    }
}

void my_refactor(first_number, second_number, third_number)
{
    while (third_number < 9) {
        third_number++;
        my_result(first_number, second_number, third_number);
    }
}

int my_print_comb(void)
{
    int first_number = 0;
    int second_number = 1;
    int third_number = 2;

    my_result(first_number, second_number, third_number);
    while (first_number <= 7) {
        while (second_number < 9) {
            my_refactor(first_number, second_number, third_number);
            second_number++;
            third_number = second_number;
        }
        first_number++;
        second_number = first_number;
    }
    return (0);
}