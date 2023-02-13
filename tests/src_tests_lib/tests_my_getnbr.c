/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_getnbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_getnbr, my_getnbr_easy_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_getnbr("255");
    cr_assert_eq(count, 255);
}
Test(my_getnbr, my_getnbr_easy_test01, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_getnbr("-255");
    cr_assert_eq(count, -255);
}
Test(my_getnbr, my_getnbr_overflow_test, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_getnbr("2147483648");
    cr_assert_eq(count, -84);
}

Test(my_getnbr, my_getnbr_interruption_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_getnbr("214A7483648");
    cr_assert_eq(count, 214);
}

Test(my_getnbr, my_getnbr_interruption_test01, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_getnbr("214/7483648");
    cr_assert_eq(count, 214);
}