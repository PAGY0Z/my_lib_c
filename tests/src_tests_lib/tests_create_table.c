/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** tests_create_table
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(create_int_table, create_int_table_free_table_test, .init=redirect_all_stdout, .timeout = 1)
{
    int **value = create_int_table(2, 2, 1, 1);
    free_table(value, 2);
}

Test(create_int_table, create_int_table_valid_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int **value = create_int_table(2, 2, 1, 1);
    cr_assert_not_null(value);
}
Test(create_int_table, create_int_table_malloc_fail00, .init=redirect_all_stdout, .timeout = 1)
{
    int **value = create_int_table(2, 2, -1, 1);
    cr_assert_null(value);
}
Test(create_int_table, create_int_table_malloc_fail01, .init=redirect_all_stdout, .timeout = 1)
{
    int **value = create_int_table(2, 2, 1, -1);
    cr_assert_null(value);
}