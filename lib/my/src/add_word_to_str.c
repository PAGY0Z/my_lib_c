/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** add_word_to_str
*/

#include "include_header.h"

char *add_word_to_str(char *src, char *window, int n, int malloc_factor)
{
    int strlen = my_strlen(src);
    int malloc_value = (strlen + n + 1) * malloc_factor;
    int i = 0;
    char *new_str = malloc(sizeof(char) * malloc_value);
    if (new_str == NULL)
        return NULL;
    for (; src[i]; i++) {
        new_str[i] = src[i];
    }
    for (int y = 0; y < n && window[y]; y++) {
        new_str[i + y] = window[y];
    }
    new_str[malloc_value] = '\0';
    return new_str;
}
