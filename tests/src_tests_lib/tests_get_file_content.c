/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_get_file_content
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(fill_buffer, fill_buffer_alphabet_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *filepath = "tests/tests_files/specials/alphabet_test_file";
    long long file_size = get_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (file_size + 1));
    char *file_content = "abcdefghijklmnopqrstuvwxyz\n";
    buffer = fill_buffer(filepath, buffer, file_size);
    cr_assert_str_eq(file_content, buffer);
}

Test(fill_buffer, fill_buffer_unreadable_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *filepath = "tests/tests_files/specials/unreadable_test_file";
    long long file_size = get_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (file_size + 1));
    buffer = fill_buffer(filepath, buffer, file_size);
    cr_assert_null(buffer);
}

Test(fill_buffer, fill_buffer_empty_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *filepath = "tests/tests_files/specials/empty_test_file";
    long long file_size = get_file_size(filepath);
    char *buffer = malloc(sizeof(char) * (file_size + 1));
    buffer = fill_buffer(filepath, buffer, file_size);
    cr_assert_null(buffer);
}

Test(get_file_content, get_file_content_alphabet_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *file_content = "abcdefghijklmnopqrstuvwxyz\n";
    char *buffer = get_file_content("tests/tests_files/specials/alphabet_test_file");
    cr_assert_str_eq(file_content, buffer);
}

Test(get_file_content, get_file_content_empty_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *buffer = get_file_content("tests/tests_files/specials/empty_test_file");
    cr_assert_null(buffer);
}

Test(get_file_content, get_file_content_unreadable_filled_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *buffer = get_file_content("tests/tests_files/specials/unreadable_filled_test_file");
    cr_assert_null(buffer);
}

Test(get_file_content, get_file_content_nonexistent_test_file, .init=redirect_all_stdout, .timeout = 1)
{
    char *buffer = get_file_content("tests/tests_files/specials/nonexistent_test_file");
    cr_assert_null(buffer);
}
