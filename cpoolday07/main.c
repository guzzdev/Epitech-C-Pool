#include <stdio.h>

char *my_strncat(char *dest , char const *src, int nb);

void main(int argc, char const *argv[])
{
    char dest[] = "I hate everything ";
    char src[] = "This is a nice";

    *my_strncat(dest, src, 6);

    printf(dest);
}
