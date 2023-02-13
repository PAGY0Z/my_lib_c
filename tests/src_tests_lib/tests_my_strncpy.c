/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_strncpy
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_strncpy, my_strncpy_test00, .init=redirect_all_stdout, .timeout = 1)
{
    char *src = "Hello World !";
    char *dest = my_strncpy(src, 14, 1);
    cr_assert_str_eq(dest, src);
}

Test(my_strncpy, my_strncpy_malloc_test, .init=redirect_all_stdout, .timeout = 1)
{
    char *src = "Hello World !";
    char *dest = my_strncpy(src, 14, -1);
    cr_assert_null(dest);
}
