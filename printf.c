#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives
 * return: the number of characters printed
 * (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
int i = 0, length = 0;
char *buffer;

va_list args;
if (format == NULL)
return (-1);
buffer = malloc(sizeof (char) * 1024);
if (buffer == NULL)
return(-1);
while (format[i] != '\0')
{
if (format[i] != '%')
{
buffer[i] = format[i];
i++, length++;
}
else /*if % found*/
{
i++;
if (format[i] == '%')
{
buffer[i] = format[i];
i++, length++;
}
if (format[i] == '\0')
{
va_end(args);
free(buffer);
return (-1);
}
else
get_print_function(format[i]);
}
}
write (1, buffer, length);
return(length);
}