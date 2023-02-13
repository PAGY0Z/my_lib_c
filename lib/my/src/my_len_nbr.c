/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** my_len_nbr
*/

#include "include_header.h"

int my_len_nbr(int score)
{
    int i = 0;
    if (score < 0) {
        score = score * (-1);
        i++;
    }
    while (score > 9) {
        i++;
        score /= 10;
    }
    return i + 1;
}
