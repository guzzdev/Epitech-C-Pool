/*
** EPITECH PROJECT, 2021
** my_print_comb2
** File description:
** differents combinaisons
*/
#include <unistd.h>

int my_print_comb2(void)
{
    char number1;
    char number2;
    char number3;
    char number4;
    for(number1 = 0; number1 < 10; number1++){
        for(number2 = 0; number2 < 9; number2++){
            for(number3 = 0; number3 < 10; number3++){
                for(number4 = 0; number4 < 10; number4++){
                    my_putchar(' ');
                    my_putchar(number1 + 48);
                    my_putchar(number2 + 48);
                    my_putchar(' ');
                    my_putchar(number3 + 48);
                    my_putchar(number4 + 48);
                    my_putchar(44);
                }
            }
        }
    }
}
