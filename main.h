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
void (*f)(va_list);
} specifiers_t;

int _printf(const char *format, ...);

#endif
