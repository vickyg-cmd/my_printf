/*
** EPITECH PROJECT, 2024
** counts how many nums there are
** File description:
** like strlen but in num
*/

#include "printf.h"

int my_numlen(int num)
{
    int len = 0;

    while (num != 0) {
    len++;
    num /= 10;
    }
    return len;
}
