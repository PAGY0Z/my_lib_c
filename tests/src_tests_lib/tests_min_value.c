/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_min_value
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(min_value, min_value_a, .init=redirect_all_stdout, .timeout = 1)
{
    int result = min_value(1, 2);
    cr_assert_eq(result, 1);
}
Test(min_value, min_value_b, .init=redirect_all_stdout, .timeout = 1)
{
    int result = min_value(2, 1);
    cr_assert_eq(result, 1);
}
Test(min_value, min_value_equal, .init=redirect_all_stdout, .timeout = 1)
{
    int result = min_value(2, 2);
    cr_assert_eq(result, 2);
}