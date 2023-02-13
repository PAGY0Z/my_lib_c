/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_add_word_to_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(add_word_to_str, add_word_to_str_valid_test00, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = '!';
    str[1] = '\0';
    char *new_str = add_word_to_str(str, "Hello World !", 5, 1);
    cr_assert_str_eq(new_str, "!Hello");
}

Test(add_word_to_str, add_word_to_str_valid_test01, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = '!';
    str[1] = '\0';
    char *new_str = add_word_to_str(str, "Hello World !", 20, 1);
    cr_assert_str_eq(new_str, "!Hello World !");
}

Test(add_word_to_str, add_word_to_str_malloc_value, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = '!';
    str[1] = '\0';
    char *new_str = add_word_to_str(str, "Hello World !", 5, -1);
    cr_assert_null(new_str);
}
