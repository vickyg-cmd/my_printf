
/*
** EPITECH PROJECT, 2024
** tests
** File description:
** unit
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/printf.h"
//#include "printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

/*Test(print_decimales, return_print_decimales, .init = redirect_all_std)
{
    float i = -72.32;
    print_decimales(i);
    cr_assert_stdout_eq_str("-72.320000");
}*/

/*Test(precision_d, return_presicion_d, .init = redirect_all_std)
{
    int y = 0;
    precision_int(6,123, &y);
    cr_assert_stdout_eq_str("000");
}*/

/*Test(width_d, return_widthPosd, .init = redirect_all_std)
{
    int y = 0;
    width_d(4, 22, &y);
    cr_assert_stdout_eq_str("  ");
    }*/

/*Test(width_d, return_widthNegd, .init = redirect_all_std)
{
    int y = 0;
    width_d(4, 22, &y);
    cr_assert_stdout_eq_str("  ");
    }*/

/*Test(print_d, return_print_d, .init = redirect_all_std)
{
    mod_t *flags = malloc(sizeof (mod_t));
    flags -> precision = 4;
    va_list x;
    va_arg();
    int y = 0;
    print_d(&x ,flags , &y);
    cr_assert_stdout_eq_str("0022");
    free(flags);
}*/

/*Test(print_d, return_print_dwidth, .init = redirect_all_std)
{
    mod_t *flags = malloc(sizeof (mod_t));
    int x = 22;
    int y = 0;
    flags -> width = 4;
    print_d(&x,flags, &y);
    cr_assert_stdout_eq_str("  22");
    free(flags);
    }*/

/*Test(print_d, return_print_dwidthandpres, .init = redirect_all_std)
{
    mod_t *flags = malloc(sizeof (mod_t));
    flags -> width = 4;
    flags -> precision = 4;
    int x = 22;
    int y = 0;
    print_d(&x ,flags, &y);
    cr_assert_stdout_eq_str("  0022");
    free(flags);
}*/

/*Test(print_c, return_print_cwidth, .init = redirect_all_std)
{
    mod_t *flags = malloc(sizeof (mod_t));
    flags -> width = 2;
    char x = 'a';
    int y = 0;
    print_c(&x, flags, &y);
    cr_assert_stdout_eq_str("  a");
}*/
/*
Test(print_scientificLow, return_print_scientific_Low, .init = redirect_all_std)
{
    double x = 1.234;
    int count = 0;
    printf_scientificLow(x, &count);
    cr_assert_stdout_eq_str("1.234000e+00");
}

Test(print_scientificLow, return_print_scientific_Low2, .init = redirect_all_std)
{
    double x = 0.1234;
    int count = 0;
    printf_scientificUpp(x, &count);
    cr_assert_stdout_eq_str("1.234000E-01");
    }*/
/*
Test(my_printf, return_my_printf, .init = redirect_all_std)
{
    my_printg
}*/
//nothing
/*
Test(my_printf, simple, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}*/

//d                                                    
Test(my_printf, simple_d, .init = redirect_all_std)
{
    my_printf("%d", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, large_width_d, .init = redirect_all_std)
{
    my_printf("%11d", 23);
    cr_assert_stdout_eq_str("         23");
}

Test(my_printf, small_width_d, .init = redirect_all_std)
{
    my_printf("%1d", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, large_precision_d, .init = redirect_all_std)
{
    my_printf("%.11d", 23);
    cr_assert_stdout_eq_str("00000000023");
}

Test(my_printf, small_precision_d, .init = redirect_all_std)
{
    my_printf("%.1d", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, wp_5_4_d, .init = redirect_all_std)
{
    my_printf("%5.4d", 23);
    cr_assert_stdout_eq_str(" 0023");
}


//c                                                    
Test(my_printf, simple_c, .init = redirect_all_std)
{
    my_printf("%c", 'g');
    cr_assert_stdout_eq_str("g");
}

Test(my_printf, large_width_c, .init = redirect_all_std)
{
    my_printf("%11c", 'g');
    cr_assert_stdout_eq_str("          g");
}

Test(my_printf, small_width_c, .init = redirect_all_std)
{
    my_printf("%1c", 'g');
    cr_assert_stdout_eq_str("g");
}

Test(my_printf, large_precision_c, .init = redirect_all_std)
{
    my_printf("%.11c", 'g');
    cr_assert_stdout_eq_str("g");
}

Test(my_printf, small_precision_c, .init = redirect_all_std)
{
    my_printf("%.1c", 'g');
    cr_assert_stdout_eq_str("g");
}

Test(my_printf, wp_5_4_c, .init = redirect_all_std)
{
    my_printf("%5.4c", 'g');
    cr_assert_stdout_eq_str("    g");
}

//s                                            
Test(my_printf, simple_s, .init = redirect_all_std)
{
    my_printf("%s", "hello");
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, large_width_s, .init = redirect_all_std)
{
    my_printf("%11s", "hello");
    cr_assert_stdout_eq_str("      hello");
}

Test(my_printf, small_width_s, .init = redirect_all_std)
{
    my_printf("%1s", "hello");
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, large_precision_s, .init = redirect_all_std)
{
    my_printf("%.11s", "hello");
    cr_assert_stdout_eq_str("hello");
}

Test(my_printf, small_precision_s, .init = redirect_all_std)
{
    my_printf("%.1s", "hello");
    cr_assert_stdout_eq_str("h");
}

Test(my_printf, wp_5_4_s, .init = redirect_all_std)
{
    my_printf("%5.4s", "hello");
    cr_assert_stdout_eq_str(" hell");
}

//i                                                                            
Test(my_printf, simple_i, .init = redirect_all_std)
{
    my_printf("%i", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, large_width_i, .init = redirect_all_std)
{my_printf("%11i", 23);                                                              
    cr_assert_stdout_eq_str("         23");
}

Test(my_printf, small_width_i, .init = redirect_all_std)
{
    my_printf("%1i", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, large_precision_i, .init = redirect_all_std)
{
    my_printf("%.11i", 23);
    cr_assert_stdout_eq_str("00000000023");
}

Test(my_printf, small_precision_i, .init = redirect_all_std)
{
    my_printf("%.1i", 23);
    cr_assert_stdout_eq_str("23");
}

Test(my_printf, wp_5_4_i, .init = redirect_all_std)
{
    my_printf("%5.4i", 23);
    cr_assert_stdout_eq_str(" 0023");
}
//x

Test(my_printf, simple_x, .init = redirect_all_std)
{
    my_printf("%x", 23);
    cr_assert_stdout_eq_str("17");
}

Test(my_printf, large_width_x, .init = redirect_all_std)
{
    my_printf("%11x", 23);
    cr_assert_stdout_eq_str("         17");
}

Test(my_printf, small_width_x, .init = redirect_all_std)
{
    my_printf("%1x", 23);
    cr_assert_stdout_eq_str("17");
}

Test(my_printf, large_precision_x, .init = redirect_all_std)
{
    my_printf("%.11x", 23);
    cr_assert_stdout_eq_str("00000000017");
}

Test(my_printf, small_precision_x, .init = redirect_all_std)
{
    my_printf("%.1x", 23);
    cr_assert_stdout_eq_str("17");
}

Test(my_printf, wp_5_4_x, .init = redirect_all_std)
{
    my_printf("%5.4x", 23);
    cr_assert_stdout_eq_str(" 0017");
}



//o
