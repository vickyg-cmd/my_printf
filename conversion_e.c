/*
** EPITECH PROJECT, 2024
** printf lowercase
** File description:
** scientific num
*/

#include "include/printf.h"

char signo(double *x, int *count)
{
    if (*x < 0){
        *x = *x * -1;
        my_putchar('-');
    }
    (*count) = (*count) + 12;
}

void bucle(double *x, int *decim)
{
    while (*x < 1){
        *x = *x * 10;
        (*decim) ++;
    }
}

void first_num(double *x, int *auxInt, int *decim, char *sim)
{
    int temp = 0;

    if (*x < 1){
        *sim = '-';
        while (*x < 1){
            *x = *x * 10;
            (*decim) ++;
        }
        *auxInt = *x;
        my_putnbr(*auxInt);
    } else if (*x >= 1){
        *decim = -1;
        *sim = '+';
        bucle(x, decim);
        temp = *x * 10;
        *auxInt = temp;
        *x = *x * 10;
        my_putnbr(*auxInt);
    }
}

int printf_scientific_low(double x, int *count)
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
    my_putchar('e');
    my_putchar(sim);
    if (decim < 10)
        my_putnbr(0);
    my_putnbr(decim);
}
