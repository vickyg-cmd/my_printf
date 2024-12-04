/*
** EPITECH PROJECT, 2024
** pritnf
** File description:
** x
*/

#include "include/printf.h"

void put_hex_upper(int num, int *count)
{
    int len_num = num;
    int len_16 = x_len(num, 16);
    int *temp_num_hold_array = malloc(sizeof(int) * (len_16 + 1));

    for (int i = 0; i < len_16; i++) {
        temp_num_hold_array[i] = num % 16;
        num /= 16;
    }
    temp_num_hold_array[len_16] = '\0';
    *count = *count + len_16;
    put_base_x(temp_num_hold_array, len_16);
    free(temp_num_hold_array);
}
