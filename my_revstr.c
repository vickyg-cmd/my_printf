/*
** EPITECH PROJECT, 2024
** revstr
** File description:
** 15
*/

#include "printf.h"

char *my_revstr(char *str)
{
    char y;
    int min = 0;
    int max = 0;
    int la = 0;

    while (str[max] != '\0'){
        max++;
    }
    la = max;
    max--;
    while (min <= max){
        y = str[min];
        str[min] = str[max];
        str[max] = y;
        min++;
        max--;
    }
    return str;
}
