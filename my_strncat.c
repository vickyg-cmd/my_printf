/*
** EPITECH PROJECT, 2024
** my strncat
** File description:
** task03
*/

#include "include/printf.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);

    for (int i = 0; i < nb; i++){
        dest[len] = src[i];
        len++;
    }
    return dest;
}
