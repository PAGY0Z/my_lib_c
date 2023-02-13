/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_is_char_num
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(is_char_num, is_char_num_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    int result = is_char_num('6');
    cr_assert_eq(result, 1);
}
Test(is_char_num, is_char_num_invalid_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int result = is_char_num('-');
    cr_assert_eq(result, 0);
}
Test(is_char_num, is_char_num_invalid_test01, .init=redirect_all_stdout, .timeout = 1)
{
    int result = is_char_num('~');
    cr_assert_eq(result, 0);
}