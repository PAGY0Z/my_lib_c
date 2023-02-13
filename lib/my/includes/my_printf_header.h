/*
** EPITECH PROJECT, 2022
** printf_header.h
** File description:
** header made for the my_printf function
*/

#ifndef MY_PRINTF_HEADER_H_
    #define MY_PRINTF_HEADER_H_

    #define PRINTF_CHARFLAGS "#0+- "
    #define PRINTF_LENGHTMODIFIER "hlLjzt"
    #define PRINTF_SINGLE_LENGHTMODIFIER "Ljzt"
    #define PRINTF_DOUBLE_LENGHTMODIFIER "hl"
    #define PRINTF_CONVERSIONS "diouxXeEfFgGaAcspnmbBS%"
    #define PRINTF_CAST_INT "difFeE"
    #define PRINTF_CAST_UNSIGNED "ouxXbBp"
    #define PRINTF_INT_FLAGS "difFeE"
    #define PRINTF_UINT_FLAGS "ouxXbBp"

    #include <stdarg.h>
    #include <stdlib.h>
    #include <aio.h>
    #include <unistd.h>

    typedef struct luggage_s {
        int save_pos;
        int pos;
        char const *str;
        int printed_char_count;
    } luggage_t;

    typedef struct flags_s {
        int sharp;
        int zero;
        int minus;
        int plus;
        int space;
        int width;
        int precision_check;
        int precision;
        char *lenght_modifier;
        char conversion;
    } flags_t;

    int my_compute_power_rec(int nb, int power);
    int my_nbrlen_base(long long nb, char const *base);
    int my_putchar(char c);
    int my_putstr(char const *str);
    int my_strlen_my_printf(char const *str, int count);
    int is_char_num(char c);
    int is_token(char const c, char const *const tokens);
    int my_putnbr_my_printf(long long nb, char const *base, char conversion);
    int my_putfloat(double nbr, int precision, char conversion);
    int my_littlen(luggage_t *log, flags_t *flags, va_list *ap);
    int my_scnotation(double nbr, int precision, int exp, char e);
    int my_getnbr_my_printf(char const *str, int start_point, luggage_t *log);
    int my_little_pony(long long ptr, char conversion);
    void my_charflags_finder(luggage_t *log, flags_t *flags);
    void my_lenght_modifier(luggage_t *log, flags_t *flags);
    int my_putchar_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_putstr_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_putnbr_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_putfloat_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_scnotation_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_hexaptr_va(luggage_t *log, flags_t *flags, va_list *ap);
    int my_bigs(luggage_t *log, flags_t *flags, va_list *ap);
    int my_printf(char const *format, ...);

#endif /* !MY_PRINTF_HEADER_H_ */
