/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/


#include <stdlib.h>

int count_words(char const *str)
{
    int col = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (my_str_isalpha(str[i]) == 0 && my_str_isnum(str[i]) == 0 &&
            (my_str_isalpha(str[i - 1]) == 1 || my_str_isnum(str[i - 1]) == 1 ||
            i == 0))
            col++;
        i++;
    }
    if (my_str_isalpha(str[i - 1]) == 1 || my_str_isnum(str[i - 1]) == 1)
        col++;
    return (col);
}

int word_len(char const *str, int i)
{
    int lenght;

    for (lenght = 0;  my_str_isnum(str[i]) == 1 || my_str_isalpha(str[i]) == 1; lenght++)
        i++;
    return (lenght);
}

char    **my_str_to_word_array(char const *str)
{
    char **dest;
    char *stock;
    int i = 0;
    int j = 0;
    int col = 0;

    dest = malloc(sizeof(char *) * (my_strlen(str) + 1));
    for (; str[i] != '\0' && col < count_words(str); i++) {
        stock = malloc(sizeof(char) * (word_len(str, i) + 1));
        for (; my_str_isalpha(str[i]) == 1 || my_str_isnum(str[i]) == 1; j++) {
            stock[j] = str[i];
            i++;
        }
        if (j > 0) {
	    stock[j] = '\0';
            dest[col] = stock;
            col++;
        }
        j = 0;
    }
    dest[col] = NULL;
    return (dest);
}