/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** my_putline
*/

#include "include_header.h"

void my_putline(char *str)
{
    for (int i = 0; str[i] && str[i] != '\n'; i++) {
        write(1, &str[i], 1);
    }
    write(1, "\n", 1);
}
