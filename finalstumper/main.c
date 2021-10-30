/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>
#include "include/my.h"
#include "include/final_stumper.h"

int error_handler(char * buff, int len)
{
     if (len < 0)
          return (84);
     for (int i = 0; buff[i] != '\0'; i++) {
          if (buff[i] != 65 && buff[i] != 66 && buff[i] != 67
          && buff[i] != 111 && buff[i] != 42 && buff[i] != 45
          && buff[i] != 47 && buff[i] != 92 && buff[i] != 124
          && buff[i] != 10 && buff[i] != 0 && buff[i] != 32)
               return 84;
     }
}

int main()
{
     char buff[BUFF_SIZE + 1];
     int offset = 0;
     int len;
     while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
          offset = offset + len;
     }
     buff[offset] = '\0';
     if (error_handler(buff, len) == 84)
          return 84;
     final_stumper(buff);
     return (0);
}