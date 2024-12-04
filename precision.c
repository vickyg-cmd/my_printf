/*
** EPITECH PROJECT, 2024
** all the precision letters
** File description:
** lara
*/

#include "include/printf.h"

void precision_int(int precision, int x, int *count)
{
    if (my_numlen(x) < precision || precision != 0){
        precision = precision - my_numlen(x);
        for (int i = 0; i < precision; i++){
            my_putnbr(0);
            (*count)++;
        }
    }
}

void precision_double(int precision, double x, int *count)
{
    if (my_numlen(x) < precision || precision != 0){
        precision = precision - my_numlen(x);
        for (int i = 0; i < precision; i++){
            my_putnbr(0);
            (*count)++;
        }
    }
}
