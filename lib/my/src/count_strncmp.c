/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** count_strncmp
*/

#include "include_header.h"

int count_strncmp(char *str1, char *str2, int n, int lim)
{
    int y = 0;
    for (; str1[y] && str2[y] && str1[y] == str2[y] && y < n && y < lim; y++);
    return y;
}
