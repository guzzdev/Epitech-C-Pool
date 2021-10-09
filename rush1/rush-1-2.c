/*
** EPITECH PROJECT, 2021
** rush-1-5
** File description:
** displays a square
*/

const char ascii_edge = 42;
const char ascii_space = 32;
const char ascii_new_line = 10;
const char ascii_slash = 47;
const char ascii_backslash = 92;

int my_putstr(char * str)
{
    int c;

    c = 0;
    while (str[c] != '\0') {
        my_putchar(str[c]);
        c++;
    }
}

void line_col(int x, char first_char, char last_char)
{
    my_putchar(first_char);
    for (int i = 0; i < (x - 2); i++) {
        if ( first_char == ascii_edge ) {
            my_putchar(ascii_space);
        } else {
            my_putchar(ascii_edge);
        }
    }
    my_putchar(last_char);
    my_putchar(ascii_new_line);
}

void line(int x)
{
    for (int i = 0; i < x; i++) {
        my_putchar(ascii_edge);
    }
    my_putchar(ascii_new_line);
}

void col(int y)
{
    for (int i = 0; i < y; i++) {
        my_putchar(ascii_edge);
        my_putchar(ascii_new_line);
    }
}

void square(int x, int y, char char_bool)
{
    if (char_bool == 0) {
        line_col(x, ascii_slash, ascii_backslash);
        for (int i = 0; i < (y - 2); i++)
            line_col(x, 42, 42);
        line_col(x, ascii_backslash, ascii_slash);
    } else {
        my_putchar(ascii_edge);
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
        line(x);
        return;
    }
    if (x == 1 && y > 0) {
        col(y);
        return;
    } else {
        my_putstr("Invalid size\n");
    }
}