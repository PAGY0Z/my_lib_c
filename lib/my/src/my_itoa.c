/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** my_itoa
*/

#include "include_header.h"

char *itoa_simple_helper(char *str, int score)
{
    if (score <= -10)
        str = itoa_simple_helper(str, score / 10);
    *str++ = '0' - score % 10;
    return str;
}

char *itoa_simple(int score, int mall_fac)
{
    char *str = malloc(sizeof(char) * (my_len_nbr(score) * mall_fac));
    if (str == NULL)
        return NULL;
    char *s = str;
    if (score < 1)
        *s++ = '-';
    else
        score = -score;
    *itoa_simple_helper(s, score) = '\0';
    return str;
}
