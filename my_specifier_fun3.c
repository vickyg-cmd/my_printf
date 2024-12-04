/*
** EPITECH PROJECT, 2024
** specifier functioins
** File description:
** Keep it simple
*/

#include "include/printf.h"

void print_perc(int *count)
{
    my_putchar('%');
    (*count) = (*count) + 1;
}

void print_e(va_list *e, mod_t *cur_mod, int *count)
{
    double x = va_arg(*e, double);

    precision_double((cur_mod->precision), x, count);
    printf_scientific_upp(x, count);
}
