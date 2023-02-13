/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_my_putchar
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_putchar, my_putchar_easy_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int value = my_putchar('c');
    cr_assert_stdout_eq_str("c");
    cr_assert_eq(value, 1);
}
