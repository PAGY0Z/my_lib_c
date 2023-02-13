/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_itoa
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(itoa_simple, itoa_simple_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = itoa_simple(100, 1);
    cr_assert_str_eq(str, "100");
}

Test(itoa_simple, itoa_simple_malloc_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = itoa_simple(100, -1);
    cr_assert_null(str);
}

Test(itoa_simple, itoa_simple_negative_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = itoa_simple(-100, 1);
    cr_assert_str_eq(str, "-100");
}