/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** final_stumper
*/

int final_stumper(char *buff)
{
    for (int i = 0; buff[i] != '\0'; i++) {
        my_putchar(buff[i]);
    }
}