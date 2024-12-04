/*
** EPITECH PROJECT, 2024
** strncpy
** File description:
** 14
*/

#include "printf.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    dest[n] = '\0';
    return dest;
}
