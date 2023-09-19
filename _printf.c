#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

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
            putchar(*format);
            count++;
        }
        else
        {
            /* Handle conversion specifiers */
            format++;  /* Move past '%' */
            if (*format == 'd' || *format == 'i')
            {
                /* Integer specifier */
                int num = va_arg(args, int);
                printf("%d", num);  /* Print the integer */
                count++;
            }
            else if (*format == 'c')
            {
                /* Character specifier */
                putchar(va_arg(args, int));
                count++;
            }
            else if (*format == 's')
            {
                /* String specifier */
                const char *str = va_arg(args, const char *);
                if (str == NULL)
                    str = "(null)";
                while (*str)
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
            else if (*format == '%')
            {
                /* Percent specifier */
                putchar('%');
                count++;
            }
            else
            {
                /* Unknown specifier, ignore */
                putchar('%');
                putchar(*format);
                count += 2;
            }
        }
        format++;
    }

    va_end(args);  /* Cleanup the va_list */
    return count;
}
