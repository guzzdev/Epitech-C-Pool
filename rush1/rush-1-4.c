/*
 ** EPITECH PROJECT , 2021
 ** square
 ** File description:
 ** function to create square
 */

char ascii_space = 32; // SPACE
char ascii_new_line = 10; // \n
char ascii_a = 65;
char ascii_b = 66;
char ascii_c = 67;

int	my_putstr(char *str)
{
  int c;

  c = 0;
  while (str[c] != '\0')
    {
      my_putchar(str[c]);
      c++;
    }
}

void line_col(int x, char first_char, char last_char)
{
    my_putchar(first_char);
    for (int i = 0; i < (x - 2); i++) {
        (first_char == ascii_b ) ? my_putchar(ascii_space) : my_putchar(ascii_b);
    }
    my_putchar(last_char);
    my_putchar(ascii_new_line);
}

void line(int x)
{
    for (int i = 0; i < x; i++) {
        my_putchar(ascii_b);
    }
    my_putchar(ascii_new_line);
}

void col(int y)
{
    for (int i = 0; i < y; i++) {
        my_putchar(ascii_b);
        my_putchar(ascii_new_line);
    }
}

void square(int x, int y, char char_bool)
{
    if (char_bool == 0) {
        line_col(x, ascii_a, ascii_c);
        for (int i = 0; i < (y - 2); i++)
            line_col(x, ascii_b, ascii_b);
        line_col(x, ascii_a, ascii_c);
    } else {
        my_putchar(ascii_b);
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
    }
    else {
        my_putstr("Invalid size\n");
    }
}