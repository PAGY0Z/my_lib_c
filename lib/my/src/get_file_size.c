/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** get_file_size
*/

#include "include_header.h"

long long get_file_size(char const *filepath)
{
    struct stat file_stats;
    if (stat(filepath, &file_stats) == -1) {
        my_perror(ERR_INV_STAT_CALL);
        return -1;
    }
    return file_stats.st_size;
}
