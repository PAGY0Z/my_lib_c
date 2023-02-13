/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_absolute
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(absolute, absolute_valid_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int value = absolute(100);
    cr_assert_eq(value, 100);
}
Test(absolute, absolute_valid_test01, .init=redirect_all_stdout, .timeout = 1)
{
    int value = absolute(-100);
    cr_assert_eq(value, 100);
}