/*
** EPITECH PROJECT, 2024
** strlen
** File description:
** 6
*/

#include "printf.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return (i);
}
