/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** Reproduction of the printf
** function from the stdio.h library
*/

#include "my_printf_header.h"
#include "my_printf_flagslists.h"

int my_treatment(luggage_t *log, flags_t *flags, va_list *ap)
{
    int i = 0;
    if (flags->conversion == '%')
        return log->printed_char_count += my_putchar('%');
    while (flags->conversion != flags_list[i].conversion_flag) {
        i++;
    }
    flags_list[i].fonction(log, flags, ap);
    return 0;
}

void my_parsing(luggage_t *log, va_list *ap)
{
    flags_t flags = {0};
    while (is_token(log->str[log->pos], PRINTF_CHARFLAGS))
        my_charflags_finder(log, &flags);
    while (is_char_num(log->str[log->pos]))
        flags.width = my_getnbr_my_printf(log->str, log->pos, log);
    if (log->str[log->pos++] == '.') {
        flags.precision_check = 1;
        if (is_char_num(log->str[log->pos]))
            flags.precision = my_getnbr_my_printf(log->str, log->pos, log);
    } else
        log->pos--;
    if (is_token(log->str[log->pos], PRINTF_LENGHTMODIFIER))
        my_lenght_modifier(log, &flags);
    if (is_token(log->str[log->pos], PRINTF_CONVERSIONS)) {
        flags.conversion = log->str[log->pos];
        my_treatment(log, &flags, ap);
    } else {
        log->printed_char_count += my_putchar('%');
        log->pos = log->save_pos;
    }
}

int my_printf(char const *format, ...)
{
    luggage_t log = {0};
    log.str = format;
    va_list ap;
    va_start(ap, format);
    for (log.pos = 0; log.str[log.pos]; log.pos++) {
        if (log.str[log.pos] == '%') {
            log.save_pos = log.pos;
            log.pos++;
            my_parsing(&log, &ap);
        } else {
            log.printed_char_count += my_putchar(log.str[log.pos]);
        }
    }
    va_end(ap);
    return log.printed_char_count;
}
