/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
*/

int my_put_nbr(int nb)
{
    unsigned int size;

    size = nb;
    if (nb < 0) {
        size = size * -1;
        my_putchar('-');
    }
    if (size > 9) {
        my_put_nbr(size / 10);
        my_put_nbr(size % 10);
    } else {
        my_putchar(size + 48);
    }
    return (0);
}
