/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** my_putstr
*/

#include "include_header.h"

int my_putstr(char const *str)
{
    return write(1, str, my_strlen(str));
}
