#include "../include/my.h"

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    if (av[2][0] != 37 && av[2][0] != 42 && av[2][0] != 43 &&
        av[2][0] != 45 && av[2][0] != 47) {
        my_put_nbr(0);
        my_putchar('\n');
        return (84);
    }
    if (av[2][0] == 47 && my_getnbrv2(av[3]) == 0) {
        my_putstr("Stop: division by zero\n");
        return (84);
    }
    if (av[2][0] == 37 && my_getnbrv2(av[3]) == 0) {
        my_putstr("Stop: modulo by zero\n");
        return (84);
    }
    do_op(av);
    my_putchar('\n');
    return (0);
}