/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** 5
*/

#include "include/printf.h"

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
