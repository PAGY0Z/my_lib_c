/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** my_perror
*/

#include "include_header.h"

int my_perror(char const *error_message)
{
    write(2, error_message, my_strlen(error_message));
    return ERR_VALUE;
}
