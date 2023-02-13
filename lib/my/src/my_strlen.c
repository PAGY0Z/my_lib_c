/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** my_strlen
*/

#include "include_header.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}
