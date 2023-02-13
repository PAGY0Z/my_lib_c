/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-julien.ferdinand
** File description:
** my_printf_flagslists
*/

#ifndef MY_PRINTF_FLAGSLISTS_H_
    #define MY_PRINTF_FLAGSLISTS_H_

    typedef struct conversion_flag_s {
        char conversion_flag;
        int (*fonction)(luggage_t *log, flags_t *flags, va_list *ap);
    } conversion_flag_t;

    conversion_flag_t const flags_list[] = {
        {'a', NULL},
        {'A', NULL},
        {'b', my_putnbr_va},
        {'B', my_putnbr_va},
        {'c', my_putchar_va},
        {'d', my_putnbr_va},
        {'e', my_scnotation_va},
        {'E', my_scnotation_va},
        {'f', my_putfloat_va},
        {'F', my_putfloat_va},
        {'g', NULL},
        {'G', NULL},
        {'i', my_putnbr_va},
        {'m', NULL},
        {'n', my_littlen},
        {'o', my_putnbr_va},
        {'p', my_hexaptr_va},
        {'s', my_putstr_va},
        {'S', my_bigs},
        {'u', my_putnbr_va},
        {'x', my_putnbr_va},
        {'X', my_putnbr_va},
        {'\0', NULL}
    };
#endif /* !MY_PRINTF_FLAGSLISTS_H_ */
