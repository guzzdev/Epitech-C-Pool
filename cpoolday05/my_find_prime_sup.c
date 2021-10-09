/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_print2(int nb)
{
    int i = 2;

    if ((nb % 2 == 0 && nb != 2) || nb <= 1) {
        return 0;
    while (nb % i != 0 && i <= nb / 2) {
        i++;
    }
    if (nb % i != 0 || i == nb)
        return 1;
    return 0;
    }
}

int my_find_prime_sup(int nb){
    if (my_isprime2(nb)){
        return nb;
    }
    
}

int main(int argc, char const *argv[])
{
    printf("%d", my_is_print(2));
    return 0;
}