/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** main
*/

#include <unistd.h>
#define BUFF_SIZE (4096)

int main()
{
     char buff[BUFF_SIZE + 1];
     int offset = 0;
     int len ;
     while ((len = read(0 , buff + offset , BUFF_SIZE - offset)) > 0) {
          offset = offset + len ;
     }
     buff[offset] = '\0';
     if (len < 0)
          return (84) ;
     rush3(buff) ;
     return (0) ;
