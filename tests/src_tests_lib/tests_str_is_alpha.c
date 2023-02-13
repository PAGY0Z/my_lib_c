/*
** EPITECH PROJECT, 2022
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** test_str_is_alpha.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(str_is_alpha, str_is_alpha_alpha_str, .init=redirect_all_stdout, .timeout = 1)
{
    int value = str_is_alpha("000696969000");
    cr_assert_eq(value, 1);
}

Test(str_is_alpha, str_is_alpha_letter_str, .init=redirect_all_stdout, .timeout = 1)
{
    int value = str_is_alpha("ABCSONPANTALON");
    cr_assert_eq(value, 0);
}

Test(str_is_alpha, str_is_alpha_mixed_str00, .init=redirect_all_stdout, .timeout = 1)
{
    int value = str_is_alpha("100|PANTALON");
    cr_assert_eq(value, 0);
}

Test(str_is_alpha, str_is_alpha_mixed_str01, .init=redirect_all_stdout, .timeout = 1)
{
    int value = str_is_alpha("100!PANTALON");
    cr_assert_eq(value, 0);
}
