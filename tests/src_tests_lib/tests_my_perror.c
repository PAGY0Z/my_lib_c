/*
** EPITECH PROJECT, 2022
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_perror.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_perror, my_perror_standard_string, .init=redirect_all_stdout, .timeout = 1)
{
    int value = my_perror("TEST\n");
    cr_assert_eq(value, 84);
    cr_assert_stderr_eq_str("TEST\n");
}
