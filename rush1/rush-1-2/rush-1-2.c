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

void line(int x, int y, char is_inverted)
{
    int cx = (y == 1) ? x : x -2;

    (is_inverted == 0) ? my_putchar(ascii_slash) : 0;
    (is_inverted == 1) ? my_putchar(ascii_backslash) : 0;
    for (int i = 0; i < cx; i++) {
        my_putchar(ascii_edge);
    }
    (is_inverted == 0) ? my_putchar(ascii_backslash) : 0;
    (is_inverted == 1) ? my_putchar(ascii_slash) : 0;
    my_putchar(ascii_new_line);
}

void side(int x, int y)
{
    int cy = (x == 1) ? y-1 : x-2;

    (y > 1 && x > 1) ? my_putchar(ascii_edge) : 0;
    for (int i = 0; i < cy; i++) {
        (x == 1) ? my_putchar(ascii_edge) : my_putchar(ascii_space);
        (x == 1) ? my_putchar(ascii_new_line) : 0;
    }
    (y > 1) ? my_putchar(ascii_edge) : 0;
    (y > 1) ? my_putchar(ascii_new_line) : 0;
}

void square(int x, int y)
{
    if (y == 0 && y == 0) {
        my_putchar(ascii_edge);
        my_putchar(ascii_new_line);
    } else {
        line(x, y, 0);
        for (int i = 0; i < (y - 2); i++)
            side(x, y);
        line(x, y, 1);
    }
}

void rush(int x, int y)
{
    if (y > 1 && x > 1) {
        square(x, y);
        return;
    }
    if (x == 1 && y == 1) {
        line(1, 1, -1);
        return;
    }
    if (y == 1 && x > 0) {
        line(x, y, -1);
        return;
    }
    if (x == 1 && y > 0) {
        side(x, y);
        return;
    } else {
        my_putstr("Invalid size\n");
    }
}