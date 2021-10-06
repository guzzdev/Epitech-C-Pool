/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** Check if a number is negative, positive or null
*/

int my_isneg(int n)
{
    if (n < 0){
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
