/*
** EPITECH PROJECT, 2021
** my_put_nb
** File description:
** putchar
*/
#include <unistd.h>

int my_put_nbr(int nb)
{
	int nbr2;

	if (nbr < 0) {
		my_putchar('-');
		nbr = nbr * (-1);
	}
	if (nb >= 10) {
		nb2 = nb % 10;
		nb = nb / 10;
		my_put_nb(nb);
		my_putchar(nb2 + 48);
	} else {
		my_putchar(nb + 48);
	}
	return (0);
}
