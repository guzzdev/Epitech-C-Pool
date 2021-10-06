 /*
** EPITECH PROJECT, 2021
** my_print_comb
** File description:
** Three digits numbers
*/

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int     my_print_comb(void)
{
    int first_number = 0;
    int second_number = 1;
    int third_number = 2;

    displaynumber(first_number, second_number, third_number);
    while (first_number < 7){
        while (second_number < 9){
            while (third_number < 9){
                third_number++;
                displaynumber(first_number, second_number, third_number);
            }
            second_number++;
            second_number = third_number;
        }
        first_number++;
        first_number = second_number;
    }
    return (0);
    
}

int     displaynumber(int first_number, int second_number, int third_number)
{
    my_putchar(first_number + 48);
    my_putchar(second_number + 48);
    my_putchar(third_number + 48);    
    if (first_number != 7){
        my_putchar(',');
        my_putchar(' ');
    }
}

int     main(void)
{
    my_print_comb();
}
