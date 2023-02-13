/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_count_strncmp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(count_strncmp, count_strncmp_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("Hello World !", "Hello World !", 5, 127);
    cr_assert_eq(result, 5);
}

Test(count_strncmp, count_strncmp_00, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("Hello World", "Hello World !", 20, 127);
    cr_assert_eq(result, 11);
}

Test(count_strncmp, count_strncmp_01, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("Hello World !", "Hello World", 20, 127);
    cr_assert_eq(result, 11);
}

Test(count_strncmp, count_strncmp_02, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("Hello world !", "Hello World !", 20, 127);
    cr_assert_eq(result, 6);
}

Test(count_strncmp, count_strncmp_03, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("HelloHello", "HelloHelloHelloHello", 10, 127);
    cr_assert_eq(result, 10);
}


Test(count_strncmp, count_strncmp_04, .init=redirect_all_stdout, .timeout = 1)
{
    int result = count_strncmp("HelloHello", "HelloHelloHelloHello", 10, 9);
    cr_assert_eq(result, 9);
}
