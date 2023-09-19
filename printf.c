#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function with limited functionality.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    int count = 0;  /* Count of characters printed */
    va_list args;   /* Variable arguments list */

    va_start(args, format);  /* Initialize the va_list */

    while (format && *format)
    {
        if (*format != '%')
        {
            /* Print non-% characters directly */
            write(1, format, 1);  /* Use write to output a single character */
            count++;
        }
        else
        {
            /* Handle conversion specifiers */
            format++;  /* Move past '%' */
            switch (*format)
            {
                case 'c':
                    print_char(args, &count);
                    break;
                case 's':
                    print_string(args, &count);
                    break;
                case 'd':
                case 'i':
                    print_integer(args, &count);
                    break;
                case '%':
                    write(1, "%", 1);  /* Use write to output the percent character */
                    count++;
                    break;
                default:
                    /* Unknown specifier, ignore */
                    write(1, "%", 1);  /* Use write to output the percent character */
                    write(1, format, 1);  /* Use write to output the unknown character */
                    count += 2;
            }
        }
        format++;
    }

    va_end(args);  /* Cleanup the va_list */
    return count;
}

/**
 * print_char - Print a character.
 * @args: The va_list containing the character argument.
 * @count: Pointer to the character count.
 */
static void print_char(va_list args, int *count)
{
    char c = va_arg(args, int);
    write(1, &c, 1);  /* Use write to output the character */
    (*count)++;
}

/**
 * print_string - Print a string.
 * @args: The va_list containing the string argument.
 * @count: Pointer to the character count.
 */
static void print_string(va_list args, int *count)
{
    const char *str = va_arg(args, const char *);
    if (str == NULL)
        str = "(null)";
    while (*str)
    {
        write(1, str, 1);  /* Use write to output a single character */
        str++;
        (*count)++;
    }
}

/**
 * print_integer - Print an integer.
 * @args: The va_list containing the integer argument.
 * @count: Pointer to the character count.
 */
static void print_integer(va_list args, int *count)
{
    int num = va_arg(args, int);
    dprintf(1, "%d", num);  /* Use dprintf to print the integer */
    (*count)++;
}
