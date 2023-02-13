/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-julien.ferdinand
** File description:
** my_bigs
*/

#include "my_printf_header.h"

int print_octal(long long oct)
{
    if (oct < 8) {
        my_putstr("00");
        return 2;
    } else if (oct < 32) {
        my_putchar('0');
        return 1;
    }
    return 0;
}

int my_bigs(luggage_t *log, flags_t *flags, va_list *ap)
{
    (void)*flags;
    char *str = va_arg(*ap, char*);
    unsigned char c;
    int count;
    for (int i = 0; str[i]; i++) {
        if (32 < str[i] && str[i] < 127)
            log->printed_char_count += my_putchar(str[i]);
        else {
            c = str[i];
            log->printed_char_count += my_putchar('\\');
            log->printed_char_count += print_octal((long long)c);
            count = my_putnbr_my_printf((long long)c, "01234567", 'S');
            log->printed_char_count += count;
        }
    }
    return 0;
}
