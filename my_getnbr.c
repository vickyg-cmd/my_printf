/*
** EPITECH PROJECT, 2024
** myget nbr
** File description:
** 7 no funciona la parte de nums grandes, tengo q hacer return en el main
*/

#include "printf.h"

int calculate(long long int i)
{
    if (i > 2147483647 || i < -2147483647){
        return (0);
    }
    return (1);
}

int my_getnbr(char *str)
{
    long long int i = 0;
    int res = 0;
    int neg = -1;
    int ressimb = 1;

    while (str[i] == '+' || str[i] == '-'){
        if (str[i] == '+')
            neg = 1;
        ressimb = ressimb * neg;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        res = res * 10;
        res = res + (str[i] - 48);
        i++;
    }
    calculate(i);
    res = res * ressimb;
    return res;
}
