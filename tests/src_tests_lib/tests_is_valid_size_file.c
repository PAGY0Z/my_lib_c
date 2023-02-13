/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_is_valid_size_file
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(is_valid_size_file, is_valid_size_file_filled_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    int value = is_valid_size_file("tests/tests_files/specials/filled_test_file");
    cr_assert_eq(value, 1);
}

Test(is_valid_size_file, is_valid_size_file_non_existent_file, .init=redirect_all_stdout, .timeout = 1)
{
    int value = is_valid_size_file("tests/tests_files/specials/non_existent_file");
    cr_assert_eq(value, 0);
}