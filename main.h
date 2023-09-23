#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct flags - Struct to choose the right action based on the flag
 * @plus: a flag is raised when + appear after %
 * @space: a flag is raised when space appear after %
 * @hash: a flag is raised when # appear after %
 * @l: a flag is raised when l appear after %
 * @h: a flag is raised when h appear after %
 * @width: the field width 
 */
typedef struct flags
{
int plus;
int space;
int hash;
int l;
int h;
int width;
} flags_t;
typedef struct width width_t;
/**
 * struct specifiers - Struct to choose the right print function
 * @specifier: The specifer
 * @func: The function associated
 */

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
int print_number(int number, flags_t *flags);
int print_binary(va_list args, flags_t *flags);
void reverse_array(char *a, int n);
int convert_unsigned(va_list args, flags_t *flags);
int print_unsign(unsigned int un_num, flags_t *flags);
int print_octal(va_list args, flags_t *flags);
int print_hexa(va_list args, flags_t *flags);
int print_Hexa(va_list args, flags_t *flags);
int print_STRING(va_list args, flags_t *flags);
int print_pointer(va_list args, flags_t *flags);
int print_long_to_hexa(unsigned long int num, flags_t *flags);
int print_reverse(va_list args, flags_t *flags);
int print_rot_13(va_list args, flags_t *flags);
void print_prcentage(void);
int after_percentage(const char *format, int *i, va_list args, flags_t *flags);
int get_flag(const char *format, int *i, flags_t *flag);
void flags_restarted(flags_t *flags);
int _isdigit(char c);

#endif
