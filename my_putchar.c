/*
** EPITECH PROJECT, 2024
** my putchar
** File description:
** 1.
*/

#include "include/printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
