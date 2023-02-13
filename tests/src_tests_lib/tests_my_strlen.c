/*
** EPITECH PROJECT, 2022
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_strlen, my_strlen_standard_str, .init=redirect_all_stdout, .timeout = 1)
{
    int value = my_strlen("Hello World of Unit Test !\n");
    cr_assert_eq(value, 27);
}
