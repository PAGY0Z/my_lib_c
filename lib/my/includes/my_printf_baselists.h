/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-julien.ferdinand
** File description:
** my_printf_baselists
*/

#ifndef MY_PRINTF_BASELISTS_H_
    #define MY_PRINTF_BASELISTS_H_

    typedef struct base_s {
        char c;
        char *base;
    } base_t;

    base_t const base[] = {
        {'d', "0123456789"},
        {'i', "0123456789"},
        {'o', "01234567"},
        {'u', "0123456789"},
        {'x', "0123456789abcdef"},
        {'X', "0123456789ABCDEF"},
        {'b', "01"},
        {'B', "01"},
        {'\0', ""}
    };

#endif /* !MY_PRINTF_BASELISTS_H_ */
