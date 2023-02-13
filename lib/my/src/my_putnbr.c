/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** my_putnbr
*/

#include "include_header.h"

int my_putnbr(unsigned int nb, char const *base)
{
    if (nb < (unsigned int)my_strlen(base)) {
        write(1, &base[nb], 1);
    } else {
        my_putnbr(nb / (unsigned int)my_strlen(base), base);
        write(1, &base[nb % (unsigned int)my_strlen(base)], 1);
    }
    return 0;
}
