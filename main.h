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
 * @f: The function associated
 */

typedef struct specifiers
{
char specifier;
void (*func)(va_list);
} specifiers_t;

int _strlen(char *s);


int _printf(const char *format, ...);
void (*get_print_function(char s))(va_list);
void print_char(va_list args);
void print_string(va_list args);
#endif
