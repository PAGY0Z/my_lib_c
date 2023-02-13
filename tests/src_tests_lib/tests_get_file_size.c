/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_get_file_size
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(get_file_size, get_file_size_filled_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    long long value = get_file_size("tests/tests_files/specials/filled_test_file");
    cr_assert_eq(value, 1395);
}

Test(get_file_size, get_file_size_empty_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    long long value = get_file_size("tests/tests_files/specials/empty_test_file");
    cr_assert_eq(value, 0);
}

Test(get_file_size, get_file_size_non_existent_file, .init=redirect_all_stdout, .timeout = 1)
{
    long long value = get_file_size("tests/tests_files/specials/non_existent_file");
    cr_assert_eq(value, -1);
}