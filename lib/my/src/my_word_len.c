/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** my_word_len
*/

#include "include_header.h"

int word_len(char *str)
{
    int i = 0;
    while (str[i] && str[i] != '\n') {
        i++;
    }
    return i;
}
