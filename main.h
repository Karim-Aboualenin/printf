#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**
 * struct specifiers - Struct to choose the right print function
 * @specifier: The specifer
 * @f: The function associated
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
int get_flags (const char *format, int *i);
#endif
