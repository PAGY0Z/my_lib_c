/*
** EPITECH PROJECT, 2023
** my_lib_c
** File description:
** tests_redirect_func
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}
