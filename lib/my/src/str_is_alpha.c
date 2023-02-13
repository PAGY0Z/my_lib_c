/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** str_is_alpha
*/

#include "include_header.h"

int str_is_alpha(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < '0' || '9' < str[i])
            return 0;
    }
    return 1;
}
