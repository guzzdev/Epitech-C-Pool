/*
** EPITECH PROJECT, 2021
** my_evil_str
** File description:
** reverse a string
*/

int my_strlen2(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_evil_str(char *str)
{
    int temp_char;
    int first_char;
    int last_char;

    last_char = my_strlen2(str) - 1;
    first_char = 0;
    while (first_char < last_char) {
        temp_char = str[first_char];
        str[first_char] = str[last_char];
        str[last_char] = temp_char;
        first_char++;
        last_char--;
    }
    return (str);
}