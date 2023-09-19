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

typedef struct specifiers
{
char specifier;
int (*func)(va_list);
} specifiers_t;

int _strlen(char *s);
int _printf(const char *format, ...);
int (*get_print_function(char s))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int convert_int(va_list args);
int print_number(int number);
int print_binary(va_list args);
void reverse_array(char *a, int n);
int convert_unsigned(va_list args);
int print_unsigned(int un_num);

#endif
