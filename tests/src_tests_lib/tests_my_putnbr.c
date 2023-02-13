/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_putnbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_putnbr, my_putnbr_easy_test, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_putnbr(255, "0123456789");
    cr_assert_stdout_eq_str("255");
}