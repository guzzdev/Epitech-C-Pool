#include "../include/my.h"

int substraction (int nb1, int nb2)
{
    return (nb1 - nb2);
}

int addition (int nb1, int nb2)
{
    return (nb1 + nb2);
}

int multiplication (int nb1, int nb2)
{
    return (nb1 * nb2);
}

int division (int nb1, int nb2)
{
    if (nb1 == 0 || nb2 == 0)
        my_putstr("STOP, Division par 0 !");
    else
        return (nb1 / nb2);
}

int modulo (int nb1, int nb2)
{
    int result;

    if (nb1 == 0 || nb2 == 0)
    {
        my_putstr("STOP, Modulo par 0 !");
    } else {
    result = nb1 % nb2;
    return (result);
    }
}
