/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char e)
{
    write(1, &e, 1);
}