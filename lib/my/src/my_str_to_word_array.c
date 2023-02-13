/*
** EPITECH PROJECT, 2023
** B-MUL-100-RUN-1-1-myradar-pierre-alexandre.grosset
** File description:
** include_func2
*/

#include "include_header.h"

void free_existing_array(char **array, int i)
{
    for (int y = 0; y < i; y++) {
        free(array[y]);
    }
    free(array);
}

char **my_str_to_word_array(char *str, int malloc_value, int malloc_value2)
{
    int word_count = my_count_word(str);
    int malloc_value2_save = malloc_value2;
    malloc_value2 = 1;
    char **array = malloc(sizeof(char *) * ((word_count + 1) * malloc_value));
    if (array == NULL)
        return NULL;
    array[word_count] = NULL;
    for (int i = 0; i < word_count; i++) {
        array[i] = my_strncpy(str, word_len(str), malloc_value2);
        malloc_value2 = (malloc_value2_save == -1) ? -1 : 1;
        if (array[i] == NULL) {
            free_existing_array(array, i);
            return NULL;
        }
        str = str + word_len(str) + 1;
    }
    return array;
}
