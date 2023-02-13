/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** is_str_file
*/

#include "include_header.h"

int is_str_file(char const *filepath)
{
    struct stat file_stats;
    if (stat(filepath, &file_stats) == -1) {
        my_perror(ERR_INV_STAT_CALL);
        return 0;
    }
    if (!(S_ISREG(file_stats.st_mode)))
        return 0;
    return 1;
}
