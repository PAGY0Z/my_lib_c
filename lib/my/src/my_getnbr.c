/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** include_func3
*/

#include "include_header.h"

int my_getnbr(char const *str)
{
    long nbr = 0;
    int factor = (*str == '-') ? -1 : 1;
    for (int i = (*str == '-') ? 1 : 0; '0' <= str[i] && str[i] <= '9'; i++) {
        nbr = nbr * 10 + (str[i] - '0');
        if (nbr > __INT32_MAX__)
            return -84;
    }
    return ((int)nbr * factor);
}
