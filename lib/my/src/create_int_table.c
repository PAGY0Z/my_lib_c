/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** create_int_table
*/

#include "include_header.h"

void free_table(int **table, int size_y)
{
    for (int y = 0; y < size_y; y++)
        free(table[y]);
    free(table);
}

int **create_int_table(int size_x, int size_y, int malloc_v0, int malloc_v1)
{
    int **table = malloc(sizeof(int *) * (size_y * malloc_v0));
    if (table == NULL)
        return NULL;
    for (int y = 0; y < size_y; y++) {
        table[y] = malloc(sizeof(int) * (size_x * malloc_v1));
        if (table[y] == NULL) {
            free_table(table, y);
            return NULL;
        }
    }
    return table;
}
