/*
** EPITECH PROJECT, 2024
** conversion x
** File description:
** printf
*/

#include "include/printf.h"

int put_base_x(int *arr, int len)
{
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] <= 9) {
            my_putchar(arr[i] + '0');
        }
        if (arr[i] > 9) {
            my_putchar(arr[i] - 10 + 'a');
        }
    }
}

void put_hex_low(int num, int *count)
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
