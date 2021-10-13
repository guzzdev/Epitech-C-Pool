/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** my_show_word_array
*/

int my_show_word_array(char * const *tab)
{
    int size = sizeof(tab) / sizeof(tab[0]);
    my_putstr(concat_params(size, tab));
}