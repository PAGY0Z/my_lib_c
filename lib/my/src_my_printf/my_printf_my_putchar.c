/*
** EPITECH PROJECT, 2022
** my_putchar.c
** File description:
** display a char and return 1
*/

#include "my_printf_header.h"

int my_putchar_va(luggage_t *log, flags_t *flags, va_list *ap)
{
    log->printed_char_count += my_putchar(va_arg(*ap, int));
    (void)flags;
    return 0;
}
