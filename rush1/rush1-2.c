/*
 ** EPITECH PROJECT , 2021
 ** square
 ** File description:
 ** function to create square
 */

char ascii_top_edge = 45; // -
char ascii_vertex = 111; // o
char ascii_side_edge = 124; // PIPE
char ascii_space = 32; // SPACE
char ascii_new_line = 10; // \n

void my_putchar(char e) {
    write(1, & e, 1);
}

void line_col(int x, char char_bool)
{
    char char_extrem; // changer nom de variable
    char char_separator;

    if (char_bool == 0) { // line
        char_extrem = 111; // o
        char_separator = 45; // -
    } else if (char_bool == 1) { // column
        char_extrem = 124; // PIPE
        char_separator = 32; // SPACE
    } else {
        char_extrem = 111; // o
        char_separator = 124; // PIPE
    }
    my_putchar(char_extrem);
    (char_bool == 2) ? my_putchar(ascii_new_line) : 0;
    for (int i = 0; i < (x - 2); i++) {
        my_putchar(char_separator);
        (char_bool == 2) ? my_putchar(ascii_new_line) : 0;
    }
    my_putchar(char_extrem);
    my_putchar(ascii_new_line);
}

void square(int x, int y, char char_bool) {
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

void rush(int x, int y) {
    if (y > 1 && x > 1) {
        square(x, y, 0);
    }
    if (x == 1 && y == 1) {
        square(x, y, 1);
    }
    if (y == 1) {
        line_col(x, 0);
    }
    if (x == 1) {
        line_col(x, 2);
    }
}
