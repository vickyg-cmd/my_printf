/*
** EPITECH PROJECT, 2024
** printf lowercase
** File description:
** scientific num
*/

#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <unistd.h>

typedef struct my_mods {
    int width;
    int precision;
    char flags;
    char specifier;
}mod_t;

typedef struct my_flags {
    char flag;
    void (*function)(va_list *, mod_t *, int *);
} flags_t;

int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_find_prime_sup(int);
int my_getnbr(char *const);
int my_isneg(int);
int my_is_prime(int);
void my_putchar(char);
int my_putnbr(int);
int my_putstr(char *);
char *my_revstr(char *);
int my_showmem(char const *, int);
int my_showstr(char const *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
char *my_strcat(char *, char const *);
int my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);
int my_str_isalpha(char const *);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_numlen(int x);

int my_printf(const char *main_str, ...);
//my_specifier_fun.c
void print_d(va_list *d, mod_t *curr_mod, int *count);
void print_u(va_list *u, mod_t *curr_mod, int *count);
void print_o(va_list *o, mod_t *curr_mod, int *count);
void print_x(va_list *x, mod_t *curr_mod, int *count);
void print_x_up(va_list *x, mod_t *curr_mod, int *count);
void print_f(va_list *f, mod_t *curr_mod, int *count);
void print_e(va_list *e, mod_t *curr_mod, int *count);
void print_e_up(va_list *e, mod_t *curr_mod, int *count);
void print_g(va_list *g, mod_t *curr_mod, int *count);
void print_g_up(va_list *g, mod_t *curr_mod, int *count);
void print_c(va_list *c, mod_t *curr_mod, int *count);
void print_s(va_list *s, mod_t *curr_mod, int *count);
void print_perc(int *count);
//mod_struct.c
mod_t *create_mod(char *flags);
//precision.c
void precision_int(int precision, int x, int *count);
void precision_double(int precision, double x, int *count);
//width.c
void width_d(int widthNum, int x, int *count);
//void widthNegd(int widthNum, int x, int *count);
void width_c(int widthNum, int *count);
void width_s(int widthNum, char *str, int *count);//do unit test
void width_f(mod_t *mods, double num, int *count);
void width_o(int w_num, int num, int *count);
//conversion_f.c
void put_float(double num, int *count);//do unit test
//conversion_o.c
void put_oct_low(int num, int *count);//do unit test
int x_len(int num, int div_by);
//conversion_x.c
void put_hex_low(int num, int *count);//to do unit test
int put_base_x(int *arr, int len);
//conversion_X.c
void put_hex_upper(int num, int *count);
//conversion_e.c
int printf_scientificLow(double x, int *count);
char signo(double *x, int *count);
void first_num(double *x, int *auxInt, int *decim, char *sim);
//conversion_e_up.c
int printf_scientific_upp(double x, int *count);
#endif
