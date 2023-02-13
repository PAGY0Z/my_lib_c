/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_fill_int_table
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(fill_int_table, fill_int_table_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int **value = create_int_table(2, 2, 1, 1);
    value = fill_int_table(value, 2, 2, '.');
    int a = value[0][0];
    int b = value[0][1];
    int c = value[1][0];
    int d = value[1][1];
    cr_assert_eq(a, '.');
    cr_assert_eq(b, '.');
    cr_assert_eq(c, '.');
    cr_assert_eq(d, '.');
}
