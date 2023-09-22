#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - Struct to choose the right print function
 * @specifier: The specifer
 * @func: The function associated
 */

/**
 * struct flags - Struct to choose the right action based on the flag
 * @flags: The flag
 * @func: The function associated
 */

typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;

typedef struct specifiers
{
char specifier;
int (*func)(va_list, flags_t *flag);
} specifiers_t;


int _strlen(char *s);
int _printf(const char *format, ...);
int (*get_print_function(char s, flags_t *flags))(va_list, flags_t *flags);
int print_char(va_list args, flags_t *flags);
int print_string(va_list args, flags_t *flags);
int convert_int(va_list args, flags_t *flags);
int print_number(int number);
int print_binary(va_list args, flags_t *flags);
void reverse_array(char *a, int n);
int convert_unsigned(va_list args, flags_t *flags);
int print_unsign(unsigned int un_num);
int print_octal(va_list args, flags_t *flags);
int print_hexa(va_list args, flags_t *flags);
int print_Hexa(va_list args, flags_t *flags);
int print_STRING(va_list args, flags_t *flags);
int print_pointer(va_list args, flags_t *flags);
int print_long_to_hexa(unsigned long int num);
int print_reverse(va_list args, flags_t *flags);
int print_rot_13(va_list args, flags_t *flags);
void print_prcentage(void);
int after_percentage(const char *format, int i, va_list args);
int get_flag(char c, flags_t *flag);

#endif
