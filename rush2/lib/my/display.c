/*
** EPITECH PROJECT, 2021
** display
** File description:
** display
*/

int display(char arg, int count, float frequence)
{
    int pre_comma = (int)frequence;
    int post_comma = ((frequence - pre_comma) * 100);

    my_putchar(arg);
    my_putchar(':');
    my_put_nbr(count);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(frequence);;
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}
