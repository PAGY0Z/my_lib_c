/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_my_putstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_putstr, my_putstr_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    int len = my_putstr("Hello World !");
    cr_assert_stdout_eq_str("Hello World !");
    cr_assert_eq(len, 13);
}
