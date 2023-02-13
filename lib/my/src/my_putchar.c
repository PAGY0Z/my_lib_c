/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** my_putchar
*/

#include "include_header.h"

int my_putchar(char c)
{
    return write(1, &c, 1);
}
