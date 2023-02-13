/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_count_word
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_count_word, my_count_word_easy_test00, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_count_word("Test\nTest\nTest\n");
    cr_assert_eq(count, 3);
}

Test(my_count_word, my_count_word_easy_test01, .init=redirect_all_stdout, .timeout = 1)
{
    int count = my_count_word("Test");
    cr_assert_eq(count, 0);
}

