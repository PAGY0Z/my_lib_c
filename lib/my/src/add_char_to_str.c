/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** add_char_to_str
*/

#include "include_header.h"

char *add_char_to_str(char *src, char c, int malloc_factor)
{
    int strlen = my_strlen(src);
    int malloc_value = (strlen + 2) * malloc_factor;
    char *new_str = malloc(sizeof(char) * malloc_value);
    if (new_str == NULL)
        return NULL;
    for (int i = 0; src[i]; i++) {
        new_str[i] = src[i];
    }
    new_str[strlen] = c;
    new_str[strlen + 1] = '\0';
    return new_str;
}
