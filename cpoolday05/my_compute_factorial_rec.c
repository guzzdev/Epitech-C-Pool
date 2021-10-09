/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec
** File description:
** Recursive function that returns the factorial of the number given
*/

int my_compute_factorial_rec(int nb)
{    
    if (nb < 0 || nb >= 13)
        return 0;
    if (nb == 1 || nb == 0)
        return 1;
    return (nb * my_compute_factorial_rec(nb-1));
}