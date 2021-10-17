/*
** EPITECH PROJECT, 2021
** count_island
** File description:
** A project to count the number of island in a map
*/

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
 
int col_nb;
int row_nb;

int get_nb_col(char** world)
{
    int col_nb;

    for (col_nb = 0; world[0][col_nb] != '\0'; col_nb++);
    return col_nb;
}

int get_nb_row(char** world)
{
    int row_nb;

    for (row_nb = 0; world[row_nb]; row_nb++);
    return row_nb;
}

int is_island(char** world, int row, int col, bool visited[][col_nb])
{
    return (row >= 0) && (row < row_nb) && (col >= 0) && (col < col_nb) && (world[row][col] == 'X' && !visited[row][col]);
}
 
void depth_first_search(char** world, int row, int col, bool visited[][col_nb])
{
    int row_nbr[] = { -1, 0, 0, 1};
    int col_nbr[] = { 0, -1, 1, 0 };
 
    visited[row][col] = true;
 
    for (int x = 0; x < 4; x++) {
        if (is_island(world, row + row_nbr[x], col + col_nbr[x], visited))
            depth_first_search(world, row + row_nbr[x], col + col_nbr[x], visited);
    }
}
 
int count_island(char** world)
{
    col_nb = get_nb_col(world);
    row_nb = get_nb_row(world);
    bool visited[row_nb][col_nb];
    int count = 0;

    memset(visited, 0, sizeof(visited));
 
    for (int i = 0; i < row_nb; ++i)
        for (int j = 0; j < col_nb; ++j)
            if (world[i][j] == 'X' && !visited[i][j])
            {
                depth_first_search(world, i, j, visited);
                count++;
            }
    return count;
}