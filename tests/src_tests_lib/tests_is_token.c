/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_is_token
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(is_token, is_token_valid_input, .init=redirect_all_stdout, .timeout = 1)
{
    char *token = "0123456789";
    int value = is_token('0', token);
    cr_assert_eq(value, 1);
}

Test(is_token, is_token_invalid_input, .init=redirect_all_stdout, .timeout = 1)
{
    char *token = "0123456789";
    int value = is_token('a', token);
    cr_assert_eq(value, 0);
}
