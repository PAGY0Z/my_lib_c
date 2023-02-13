/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** is_readable_file
*/

#include "include_header.h"

int is_readable_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return 0;
    close(fd);
    return 1;
}
