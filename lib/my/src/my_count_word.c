/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** my_count_word
*/

#include "include_header.h"

int my_count_word(char *str)
{
    int count = 0;
    for (; str[0]; str++) {
        if (str[0] == '\n')
            count++;
    }
    return count;
}
