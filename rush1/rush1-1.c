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

void my_putchar(char e)
{
    write(1, &e, 1);
}

void line_col(int x, char bool)
{
  char char_extrem; // changer nom de variable
  char char_separator;

  if (bool == 0) {
    char_extrem = 111;
    char_separator = 45;
  } else {
    char_extrem = 124;
    char_separator = 32;
  }
  my_putchar(char_extrem);
  for (int i = 0; i < (x-2); i++) {
    my_putchar(char_separator);
    if () { // TODO: refactor L62 inside

    }
  }
  my_putchar(char_extrem);
  my_putchar(ascii_new_line);
}

void square(int x, int y){

}

void rush(int x, int y)
{
  int i;

  if (y > 1 && x > 1) {
    line_col(x, 0);
    for (i = 0; i < (y - 2); i++)
      line_col(x, 1);
    line_col(x, 0);
  } else if (x == 1 && y == 1) {
    my_putchar(ascii_vertex);
    my_putchar(ascii_new_line);
  } else if (y == 1) {
    line_col(x, 0);
  } else if (x == 1) {
    my_putchar(ascii_vertex);
    my_putchar(ascii_new_line);
    for (i = 0; i < (y - 2); i++) {
      my_putchar(ascii_side_edge);
      my_putchar(ascii_new_line);
    }
    my_putchar(ascii_vertex);
    my_putchar(ascii_new_line);
  }
}
