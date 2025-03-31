/*
** EPITECH PROJECT, 2021
** my_print_comb2
** File description:
** differents combinaisons
*/

int my_print_comb2 (void)
{
    int pair_one;
    int pair_two;

    pair_one = 0;
    pair_two = 1;
    while (pair_one != 99) {
        my_putchar((pair_one / 10) + 48);
        my_putchar((pair_one % 10) + 48);
        my_putchar(' ');
        my_putchar((pair_two / 10) + 48);
        my_putchar((pair_two % 10) + 48);
            if (pair_two == 99) {
                pair_one++;
                pair_two = pair_one +1;
            } else {
                pair_two++;
            }
            if (pair_one != 99) {
                my_putchar (',');
                my_putchar (' ');
            }
    }
}