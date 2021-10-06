/*
** EPITECH PROJECT, 2021
** my_print_revalpha
** File description:
** Print the alphabet in descending order
*/
#include <unistd.h>

int my_print_revalpha(void)
{
    int i;
    
    for (i = 122; i != 96; i--) {
        my_putchar(i);
    }
    return (0);
}

