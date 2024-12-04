/*
** EPITECH PROJECT, 2024
** my isneg
** File description:
** 2.
*/

#include "include/printf.h"

int my_isneg(int n)
{
    char showear = 'P';

    if (n < 0) {
        showear = 'N';
        my_putchar(showear);
    } else {
        my_putchar(showear);
    }
}
