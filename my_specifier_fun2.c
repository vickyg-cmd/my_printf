/*
** EPITECH PROJECT, 2024
** specifier functioins
** File description:
** Keep it simple
*/

#include "include/printf.h"

void print_e_up(va_list *e, mod_t *cur_mod, int *count)
{
    double x = va_arg(*e, double);

    precision_double((cur_mod->precision), x, count);
    printf_scientific_upp(x, count);
}

void print_g(va_list *g, mod_t *curr_mod, int *count)
{
    double x = va_arg(*g, double);
}

void print_g_up(va_list *g, mod_t *curr_mod, int *count)
{
    double x = va_arg(*g, double);
}

void print_c(va_list *c, mod_t *curr_mod, int *count)
{
    char x = va_arg(*c, int);

    if (curr_mod->width > 0)
        width_c((curr_mod->width), count);
    my_putchar(x);
    if (curr_mod->width < 0){
        curr_mod->width = curr_mod->width * -1;
        width_c((curr_mod->width), count);
    }
    (*count)++;
}

void print_s(va_list *s, mod_t *curr_mod, int *count)
{
    char *str = va_arg(*s, char *);
    int i = 0;

    if (curr_mod->width > 0)
        width_s((curr_mod->width), str, count);
    my_putstr(str);
    if (curr_mod->width < 0){
        curr_mod->width = curr_mod->width * -1;
        width_s((curr_mod->width), str, count);
    }
    while (str[i] != '\0') {
        i++;
    }
    (*count) = (*count) + i;
}
