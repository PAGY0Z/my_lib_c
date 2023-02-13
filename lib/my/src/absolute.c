/*
** EPITECH PROJECT, 2023
** B-PSU-100-RUN-1-1-navy-julien.ferdinand
** File description:
** absolute
*/

#include "include_header.h"

int absolute(int nombre)
{
    nombre = (nombre < 0) ? -nombre : nombre;
    return nombre;
}
