/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** tests_my_len_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "include_header.h"

void redirect_all_stdout(void);

Test(my_len_nbr, my_len_nbr_valid_test, .init=redirect_all_stdout, .timeout = 1)
{
    int len = my_len_nbr(100);
    cr_assert_eq(len, 3);
}
