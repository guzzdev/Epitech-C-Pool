/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** Reverse the string
*/

char *my_revstr(char *str) {
    int first_char = 0;
    int last_char;
    char temp;

    for (last_char = 0; str[last_char] != '\0'; last_char++);
    last_char--;
    while (first_char < last_char) {
        temp = str[first_char];
        str[first_char] = str[last_char];
        str[last_char] = temp;
        first_char = first_char + 1;
        last_char = last_char - 1;
    }

    return (str);
}