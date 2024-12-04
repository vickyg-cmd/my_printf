/*
** EPITECH PROJECT, 2024
** my put nbr
** File description:
** no tiene en cuenta si el numero tiene decimales y los queremos imprimir
*/

#include "include/printf.h"

int my_putnbr(int nb)
{
    int aux = 0;

    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 9){
        my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
