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
/*specifiers_t specifiers[] = {
{'c', print_char,
{'s', print_string}}
}*/
va_list args;
if (format == NULL);
return (-1);
buffer = malloc(sizeof (char) * 1024);
if (buffer == NULL)
return(-1);
while (format[i] != '\0')
{
if (format[i] != '%')
{
buffer[i] == format[i];
i++, length++;
}}
write (1,buffer,i);
return(length);
}