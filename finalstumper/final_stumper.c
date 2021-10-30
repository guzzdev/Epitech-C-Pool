/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** final_stumper
*/

void display_or(char buff, int col, int line)
{
    display("rush1-3", col, line);
    my_putstr(" || ");
    display("rush1-4", col, line);
    my_putstr(" || ");
    display("rush1-5", col, line);
}

void display_handler(char *buff, int col, int line)
{
    int last_line = (col * (line-1)) + line - 1;
    int last_char = ((col * line) + line) - 2;

    if (buff[0] == 'o')
        display("rush1-1", col, line);
    else if (buff[0] == '*' || buff[0] == '/')
        display("rush1-2", col, line);
    else if (buff[0] == 'A' && buff[col-1] == 'A')
        display("rush1-3", col, line);
    else if (buff[0] == 'B')
        display_or(buff, col, line);
    else if (buff[last_line] == 'A' && buff[last_char] == 'C')
        display("rush1-4", col, line);
    else
        display("rush1-5", col, line);
}