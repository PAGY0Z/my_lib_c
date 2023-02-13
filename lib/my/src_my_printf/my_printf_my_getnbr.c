/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** work
*/

#include "my_printf_header.h"

int my_getnbr_my_printf(char const * str, int starting_point, luggage_t *log)
{
    int i = starting_point;
    int nbr = 0;

    while (47 < str[i] && str[i] < 58) {
        nbr = nbr * 10 + (str[i] - 48);
        i++;
    }
    log->pos += i - starting_point;
    return nbr;
}
