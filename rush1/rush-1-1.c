/*
** EPITECH PROJECT, 2021
** rush-1-1
** File description:
** display a square based with a custom size
*/

const char ascii_top_edge = 45;
const char ascii_vertex = 111;
const char ascii_side_edge = 124;
const char ascii_space = 32;
const char ascii_new_line = 10;

int my_putstr(char * str)
{
    int c;

    c = 0;
    while (str[c] != '\0') {
        my_putchar(str[c]);
        c++;
    }
}

void line_col(int x, char char_bool)
{
    char char_extrem;
    char char_separator;

    if (char_bool == 0) {
        char_extrem = 111;
        char_separator = 45;
    } else if (char_bool == 1) {
        char_extrem = 124;
        char_separator = 32;
    } else {
        char_extrem = 111;
        char_separator = 124;
    }
    my_putchar(char_extrem);
    (char_bool == 2) ? my_putchar(ascii_new_line): 0;
    for (int i = 0; i < (x - 2); i++) {
        my_putchar(char_separator);
        (char_bool == 2) ? my_putchar(ascii_new_line): 0;
    }
    my_putchar(char_extrem);
    my_putchar(ascii_new_line);
}

void square(int x, int y, char char_bool)
{
    if (char_bool == 0) {
        line_col(x, 0);
        for (int i = 0; i < (y - 2); i++)
            line_col(x, 1);
        line_col(x, 0);
    } else {
        my_putchar(ascii_vertex);
        my_putchar(ascii_new_line);
    }
}

void rush(int x, int y)
{
    if (y > 1 && x > 1) {
        square(x, y, 0);
        return;
    }
    if (x == 1 && y == 1) {
        square(x, y, 1);
        return;
    }
    if (y == 1 && x > 0) {
        line_col(x, 0);
        return;
    }
    if (x == 1 && y > 0) {
        line_col(y, 2);
        return;
    } else {
        my_putstr("Invalid size\n");
    }
}