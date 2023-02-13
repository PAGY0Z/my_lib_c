/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** my_strncpy
*/

#include "include_header.h"

char *my_strncpy(const char *src, size_t n, int malloc_value)
{
    size_t i;
    char *dest = malloc(sizeof(char) * ((n + 1) * malloc_value));
    if (dest == NULL)
        return NULL;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    dest[n] = '\0';
    return dest;
}
