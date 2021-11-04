/*
** EPITECH PROJECT, 2021
** test 
** File description:
** test
*/

int my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}

int my_strlen(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
        i++;
    return (i);
}

void my_put_nbr(int nb)
{
    int	i = 0;
    
    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        if (nb <= 9 && nb >= 0)
            my_put_nbr(nb);
    }
    if (nb > 9) {
        i = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(i + '0');
    }
}
