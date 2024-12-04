/*
** EPITECH PROJECT, 2024
** conversion o
** File description:
** printf
*/

#include "include/printf.h"

int x_len(int num, int div_by)
{
    int len = 0;

    while (num > 0) {
        num /= div_by;
        len++;
    }
    return len;
}

void put_oct_low(int num, int *count)
{
    int len_num = num;
    int len_8 = x_len(num, 8);
    int *temp_num_hold_array = malloc(sizeof(int) * (len_8 + 1));

    for (int i = 0; i <= len_8; i++) {
        temp_num_hold_array[i] = num % 8;
        num /= 8;
    }
    temp_num_hold_array[len_8] = '\0';
    *count = *count + len_8;
    put_base_x(temp_num_hold_array, len_8);
    free(temp_num_hold_array);
}
