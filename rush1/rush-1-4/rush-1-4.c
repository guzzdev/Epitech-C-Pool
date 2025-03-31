/*
** EPITECH PROJECT, 2021
** rush-1-5
** File description:
** displays a square
*/

const char space = 32;
const char new_line = 10;
const char first_char = 65;
const char last_char = 67;
const char separator = 66;

int my_putstr(char * str)
{
    int c;

    c = 0;
    while (str[c] != '\0') {
        my_putchar(str[c]);
        c++;
    }
}

void line(int x, int y)
{
    int cx = (y == 1) ? x : x -2;

    (x > 1 && y > 1) ? my_putchar(first_char) : 0;
    for (int i = 0; i < cx; i++) {
        my_putchar(separator);
    }
    (x > 1 && y > 1) ? my_putchar(last_char) : 0;
    my_putchar(new_line);
}

void side(int x, int y)
{
    int cy = (x == 1) ? y-1 : x -2;

    (y > 1 && x > 1) ? my_putchar(separator) : 0;
    for (int i = 0; i < cy; i++) {
        (x == 1) ? my_putchar(separator) : my_putchar(space);
        (x == 1) ? my_putchar(new_line) : 0;
    }
    (y > 1) ? my_putchar(separator) : 0;
    (y > 1) ? my_putchar(new_line) : 0;
}

void square(int x, int y)
{
    if (y == 0 && y == 0) {
        my_putchar(last_char);
        my_putchar(new_line);
    } else {
        line(x, y);
        for (int i = 0; i < (y - 2); i++)
            side(x, y);
        line(x, y);
    }
}

void rush(int x, int y)
{
    if (y > 1 && x > 1) {
        square(x, y);
        return;
    }
    if (x == 1 && y == 1) {
        line(1, 1);
        return;
    }
    if (y == 1 && x > 0) {
        line(x, y);
        return;
    }
    if (x == 1 && y > 0) {
        side(x, y);
        return;
    } else {
        my_putstr("Invalid size\n");
    }
}