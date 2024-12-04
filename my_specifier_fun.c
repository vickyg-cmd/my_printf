/*
** EPITECH PROJECT, 2024
** specifier functioins
** File description:
** Keep it simple
*/

#include "include/printf.h"

void print_d(va_list *d, mod_t *curr_mod, int *count)
{
    int x = va_arg(*d, int);

    if (curr_mod->width > 0)
        width_d((curr_mod->width), x, count);
    precision_int((curr_mod->precision), x, count);
    my_putnbr(x);
    if (curr_mod->width < 0) {
        curr_mod->width = curr_mod->width * -1;
        width_d((curr_mod->width), x, count);
    }
    *count = *count + my_numlen(x);
}

void print_o(va_list *o, mod_t *curr_mod, int *count)
{
    int x = va_arg(*o, int);

    if (curr_mod->width < 0)
        width_o((curr_mod->width), x, count);
    precision_int((curr_mod->precision), x, count);
    put_oct_low(x, count);
    if (curr_mod->width < 0) {
        curr_mod->width = curr_mod->width * -1;
        width_o((curr_mod->width), x, count);
    }
}

void print_x(va_list *x, mod_t *curr_mod, int *count)
{
    int aux = va_arg(*x, int);

    precision_int((curr_mod->precision), aux, count);
    put_hex_low(aux, count);
}

void print_x_up(va_list *x, mod_t *curr_mod, int *count)
{
    int aux = va_arg(*x, int);

    precision_int((curr_mod->precision), aux, count);
    put_hex_upper(aux, count);
}

void print_f(va_list *f, mod_t *curr_mod, int *count)
{
    double x = va_arg(*f, double);

    precision_double((curr_mod->precision), x, count);
    put_float(x, count);
}
