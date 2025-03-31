/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** my_show_word_array
*/

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != '\0'; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar(10);
    }
    return 0;
}