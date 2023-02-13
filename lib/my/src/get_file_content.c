/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** get_file_content
*/

#include "include_header.h"

char *fill_buffer(char const *filepath, char *dest, long long file_size)
{
    int fd;
    if ((fd = open(filepath, O_RDONLY)) == -1)
        return NULL;
    if (read(fd, dest, file_size) < 1) {
        close(fd);
        return NULL;
    }
    dest[file_size] = '\0';
    close(fd);
    return dest;
}

char *get_file_content(char const *filepath)
{
    long long file_size = get_file_size(filepath);
    if (file_size == -1)
        return NULL;
    file_size = (file_size == 0) ? -2 : file_size;
    char *buffer = malloc(sizeof(char) * (file_size + 1));
    if (buffer == NULL)
        return NULL;
    buffer = fill_buffer(filepath, buffer, file_size);
    if (buffer == NULL) {
        free(buffer);
        return NULL;
    }
    return buffer;
}
