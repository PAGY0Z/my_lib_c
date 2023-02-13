/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** fill_int_table
*/

#include "include_header.h"

int **fill_int_table(int **table, int size_x, int size_y, int fill_value)
{
    for (int y = 0; y < size_y; y++) {
        for (int x = 0; x < size_x; x++) {
            table[y][x] = fill_value;
        }
    }
    return table;
}
