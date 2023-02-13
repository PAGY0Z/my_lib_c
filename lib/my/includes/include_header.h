/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** include_header
*/

#ifndef INCLUDE_HEADER_H_
    #define INCLUDE_HEADER_H_

    #include "my_perror_header.h"
    #include "is_token_header.h"
    #include "my_printf_header.h"

    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <stdio.h>

    int absolute(int nombre);
    char *add_char_to_str(char *str, char c, int malloc_value);
    char *add_word_to_str(char *src, char *window, int n, int malloc_factor);
    int count_strncmp(char *str1, char *str2, int n, int lim);
    void free_table(int **table, int size_y);
    int **create_int_table(int size_x, int size_y, int mall_v0, int mall_v1);
    int **fill_int_table(int **table, int size_x, int size_y, int fill_value);
    char *fill_buffer(char const *filepath, char *dest, long long file_size);
    char *get_file_content(char const *filepath);
    long long get_file_size(char const *filepath);
    int is_char_num(char c);
    int is_readable_file(char const *filepath);
    int is_str_file(char const *filepath);
    int is_token(char c, char const *token);
    int is_valid_size_file(char const *filepath);
    int max_value(int a, int b);
    int min_value(int a, int b);
    int my_count_word(char *str);
    int my_getnbr(char const *str);
    char *itoa_simple_helper(char *str, int score);
    char *itoa_simple(int score, int malloc_value);
    int my_len_nbr(int score);
    int my_perror(char const *error_message);
    int my_printf(char const *format, ...);
    int my_putchar(char c);
    void my_putline(char *str);
    int my_putnbr(unsigned int nb, char const *base);
    int my_putstr(char const *str);
    char **my_str_to_word_array(char *str, int malloc_value, int malloc_value2);
    int my_strlen(char const *str);
    char *my_strncpy(const char *src, size_t n, int malloc_value);
    int word_len(char *str);
    int str_is_alpha(char const *str);

#endif /* !INCLUDE_HEADER_H_ */
