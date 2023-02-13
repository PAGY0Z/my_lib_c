/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_word_len
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(word_len, word_len_alpha_str, .init=redirect_all_stdout, .timeout = 1)
{
    int value = word_len("0123456789");
    cr_assert_eq(value, 10);
}

Test(word_len, word_len_interruption_test, .init=redirect_all_stdout, .timeout = 1)
{
    int value = word_len("01234\n56789");
    cr_assert_eq(value, 5);
}
