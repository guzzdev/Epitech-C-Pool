/*
** EPITECH PROJECT , 2021
** square
** File description:
** function to create square
*/


/*
** ASCII TABLE
** 111 = o
** 45 = -
** 10 = \n
** 32 = SPACE
** 124 = PIPE
*/

void my_putchar(char e)
{
    write(1, &e, 1);
}

void line(int x)
{
  int i;

  my_putchar(111);
  for (i = 0; i < (x-2); i++) {
    my_putchar(45);
  }
  my_putchar(111);
  my_putchar(10);
}

void col(int x)
{
  int i;

  my_putchar(124);
  for (i = 0; i < (x-2); i++) {
    my_putchar(32);
  }
  my_putchar(124);
  my_putchar(10);
}

void rush(int x, int y)
{
  int i;

  if (y > 1 && x > 1) {
    line(x);
    for (i = 0; i < (y - 2); i++)
      col(x);
      line(x);
  } else if (x == 1 && y == 1) {
    my_putchar(111);
    my_putchar(10);
  } else if (y == 1) {
    line(x);
  } else if (x == 1) {
    my_putchar(111);
    my_putchar(10);
    for (i = 0; i < (y - 2); i++) {
      my_putchar(124);
      my_putchar(10);
    }
    my_putchar(111);
    my_putchar(10);
  }
