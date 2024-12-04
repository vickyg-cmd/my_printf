/*
** EPITECH PROJECT, 2024
** printf lowercase
** File description:
** scientific num
*/

#include "include/printf.h"

int printf_scientific_upp(double x, int *count)
{
    int auxInt = 0;
    int decim = 0;
    int auxDec = 0;
    char sim;

    signo(&x, count);
    first_num(&x, &auxInt, &decim, &sim);
    my_putchar('.');
    x = x - auxInt;
    x = x * 1000000;
    auxDec = x;
    my_putnbr(auxDec);
    x = x - auxDec;
    my_putchar('E');
    my_putchar(sim);
    if (decim < 10)
        my_putnbr(0);
    my_putnbr(decim);
}
