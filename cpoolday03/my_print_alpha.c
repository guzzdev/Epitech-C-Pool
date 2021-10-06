/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** Print the alphabet in ascending order
*/

int my_print_alpha(void)
{
    int i;
    
    for (i = 97; i < 123; i++)
    {
        my_putchar(i);
    }
    return (0);
}
