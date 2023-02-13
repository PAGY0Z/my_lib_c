/*
** EPITECH PROJECT, 2022
** my_littlen
** File description:
** %n of printf
*/

#include "my_printf_header.h"

int my_littlen(luggage_t *log, flags_t *flags, va_list *ap)
{
    *va_arg(*ap, int *) = log->printed_char_count;
    (void)flags;
    return 0;
}
