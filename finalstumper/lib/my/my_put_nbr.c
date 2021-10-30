/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

int my_put_nbr(int nb)
{
    int n;
    n = nb % 10;
    n = n + 48;
    nb = nb / 10;
    if (nb > 0)
        my_put_nbr(nb);
    my_putchar(n);
}
