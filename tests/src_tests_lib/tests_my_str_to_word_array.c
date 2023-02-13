/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_str_to_word_array
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_str_to_word_array, my_str_to_word_array_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = "Test00\nTest01\nTest02\n";
    char **word_array = my_str_to_word_array(str, 1, 1);
    cr_assert_str_eq(word_array[0], "Test00");
    cr_assert_str_eq(word_array[1], "Test01");
    cr_assert_str_eq(word_array[2], "Test02");
    cr_assert_null(word_array[3]);
}

Test(my_str_to_word_array, my_str_to_word_malloc_arr, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = "Test00\nTest01\nTest02\n";
    char **word_array = my_str_to_word_array(str, -1, 1);
    cr_assert_null(word_array);
}

Test(my_str_to_word_array, my_str_to_word_malloc_str, .init=redirect_all_stdout, .timeout = 1)
{
    char *str = "Test00\nTest01\nTest02\n";
    char **word_array = my_str_to_word_array(str, 1, -1);
    cr_assert_null(word_array);
}
