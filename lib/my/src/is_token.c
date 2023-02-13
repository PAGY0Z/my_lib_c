/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** is_token
*/

#include "include_header.h"

int is_token(char c, char const *token)
{
    for (int i = 0; token[i]; i++) {
        if (c == token[i])
            return 1;
    }
    return 0;
}
