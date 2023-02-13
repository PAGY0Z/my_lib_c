/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_add_char_to_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(add_char_to_str, add_char_to_str_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = malloc(sizeof(char) * 2);
    str[0] = '!';
    str[1] = '\0';
    char *buffer = add_char_to_str(str, '!', 1);
    cr_assert_str_eq(buffer, "!!");
}

Test(add_char_to_str, add_char_to_str_malloc_fail, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = malloc(sizeof(char) * 1);
    str[0] = '\0';
    char *buffer = add_char_to_str(str, '!', -1);
    cr_assert_null(buffer);
}