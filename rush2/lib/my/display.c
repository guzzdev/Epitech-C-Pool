/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

int frequence(int x, int total)
{
    float percentage;
    percentage = (float)x / total * 10000.0;
    return percentage;
}

int display(char arg, int count, int set_len)
{


    my_putchar(arg);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr();
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}