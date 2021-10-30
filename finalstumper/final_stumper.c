/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-finalstumper-louis.olive
** File description:
** final_stumper
*/

/**
** Returns the number of columns
**
** @param buff array of given square
*/
int get_col_nbr(char * buff)
{
    int nbr_col = 0;

    for (; buff[nbr_col] != '\n'; nbr_col++);
    return nbr_col;
}

/**
** Returns the number of lines
**
** @param buff array of given square
*/
int get_line_nbr(char * buff)
{
    int nbr_line = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == '\n')
            nbr_line++;
    }
    return nbr_line;
}

/**
** Display the result
**
** @param str assignement title
** @param nbr_col number of columns
** @param nbr_line number of lines
*/
void display(char * str, int nbr_col, int nbr_line)
{
    my_putchar('[');
    my_putstr(str);
    my_putstr("] ");
    my_put_nbr(nbr_col);
    my_putchar(' ');
    my_put_nbr(nbr_line);
}

/**
** Display multiple results
**
** @param buff array of given square
** @param nbr_col number of columns
** @param nbr_line number of lines
*/
void display_or(char * buff, int nbr_col, int nbr_line)
{
    display("rush1-3", nbr_col, nbr_line);
    my_putstr(" || ");
    display("rush1-4", nbr_col, nbr_line);
    my_putstr(" || ");
    display("rush1-5", nbr_col, nbr_line);
}

/**
** Test the given square
**
** @param buff array of given square
*/
void final_stumper(char *buff)
{
    int nbr_col = get_col_nbr(buff);
    int nbr_line = get_line_nbr(buff);
    int last_line = (nbr_col * (nbr_line-1)) + nbr_line - 1;
    int last_char = ((nbr_col * nbr_line) + nbr_line) - 2;

    if (buff[0] == 'o')
        display("rush1-1", nbr_col, nbr_line);
    else if (buff[0] == '*' || buff[0] == '/')
        display("rush1-2", nbr_col, nbr_line);
    else if (buff[0] == 'A' && buff[nbr_col-1] == 'A')
        display("rush1-3", nbr_col, nbr_line);
    else if (buff[0] == 'B')
        display_or(buff, nbr_col, nbr_line);
    else if (buff[last_line] == 'A' && buff[last_char] == 'C')
        display("rush1-4", nbr_col, nbr_line);
    else
        display("rush1-5", nbr_col, nbr_line);
    my_putchar('\n');
}