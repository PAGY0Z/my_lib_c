/*
** EPITECH PROJECT, 2022
** B-CPE-101-RUN-1-1-myprintf-julien.ferdinand
** File description:
** my_printf_identifiers
*/

#include "my_printf_header.h"

void my_lenght_modifier(luggage_t *log, flags_t *flags)
{
    if (is_token(log->str[log->pos], PRINTF_SINGLE_LENGHTMODIFIER)) {
        flags->lenght_modifier = malloc(sizeof(char) * 2);
        flags->lenght_modifier[0] = log->str[log->pos];
        flags->lenght_modifier[1] = '\0';
        log->pos += 1;
    }
    if (is_token(log->str[log->pos], PRINTF_DOUBLE_LENGHTMODIFIER)) {
        if (log->str[log->pos] == log->str[log->pos + 1]) {
            flags->lenght_modifier = malloc(sizeof(char) * 3);
            flags->lenght_modifier[0] = log->str[log->pos];
            flags->lenght_modifier[1] = log->str[log->pos];
            flags->lenght_modifier[2] = '\0';
            log->pos += 2;
        } else {
            flags->lenght_modifier = malloc(sizeof(char) * 2);
            flags->lenght_modifier[0] = log->str[log->pos];
            flags->lenght_modifier[1] = '\0';
            log->pos += 1;
        }
    }
}

void my_charflags_finder(luggage_t *log, flags_t *flags)
{
    if (log->str[log->pos] == '#')
        flags->sharp = 1;
    if (log->str[log->pos] == '+')
        flags->plus = 1;
    if (log->str[log->pos] == '-')
        flags->minus = 1;
    if (log->str[log->pos] == ' ')
        flags->space = 1;
    if (log->str[log->pos] == '0')
        flags->zero = 1;
    log->pos++;
}

// void my_charflags_finder(luggage_t *log, flags_t *flags)
// {
//     switch (log->str[log->pos]) {
//     case '#' :
//         flags->sharp = 1;
//         break;
//     case '+' :
//         flags->plus = 1;
//         break;
//     case '-' :
//         flags->minus = 1;
//         break;
//     case ' ' :
//         flags->space = 1;
//         break;
//     case '0' :
//         flags->zero = 1;
//         break;
//     }
//     log->pos++;
// }
