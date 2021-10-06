/*
** EPITECH PROJECT, 2021
** my_print_alpha
** File description:
** Print the alphabet in ascending order
*/

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    int i;
    
    for (i = 97; i < 123; i++)
    {
        my_putchar(i);
    }

 
    my_putchar("\n");

    return (0);
}
