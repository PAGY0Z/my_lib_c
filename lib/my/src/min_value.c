/*
** EPITECH PROJECT, 2023
** B-CPE-110-RUN-1-1-antman-pierre-alexandre.grosset
** File description:
** min_value
*/

int min_value(int a, int b)
{
    if (a < b)
        return a;
    if (b < a)
        return b;
    return a;
}
