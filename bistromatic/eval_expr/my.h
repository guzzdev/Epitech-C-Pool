/*
** EPITECH PROJECT, 2021
** headers
** File description:
** a headers
*/

#ifndef HEADERS_H
#define HEADERS_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
void my_put_nbr(int nb);
int my_atoi(char **str, int op_before);
int which_op(int a, char o, int b);
int sum_sub(char **str);
int first_op(char **str);

#endif
