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
write(1, format, 1);  /* Use write to output a single character */
count++;
}
else
{
format++;  /* Move past '%' */
if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
dprintf(1, "%d", num);  /* Use dprintf to print the integer */
count++;
}
else if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);  /* Use write to output the character */
count++;
}
else if (*format == 's')
{
const char *str = va_arg(args, const char *);
if (str == NULL)
str = "(null)";
while (*str)
{
write(1, str, 1);
str++;
count++;
}
}
else if (*format == '%')
{
write(1, "%", 1);  /* Use write to output the percent character */
count++;
}
else
{
write(1, "%", 1);  /* Use write to output the percent character */
write(1, format, 1);  /* Use write to output the unknown character */
count += 2;
}
}
format++;
}
va_end(args);  /* Cleanup the va_list */
return (count);
}
