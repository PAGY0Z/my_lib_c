/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_putline
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_putline, my_putline_easy_test00, .init=redirect_all_stdout, .timeout = 1)
{
    my_putline("Test\nTest\nTest");
    cr_assert_stdout_eq_str("Test\n");
}

Test(my_putline, my_putline_easy_test01, .init=redirect_all_stdout, .timeout = 1)
{
    my_putline("Test");
    cr_assert_stdout_eq_str("Test\n");
}