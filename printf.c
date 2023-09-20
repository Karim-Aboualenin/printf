#include "main.h"

/**
 * print_prcentage - print precentage sign
 * Return: Nothing
*/
void print_prcentage (void)
{
char temp = '%';
write (1, &temp, 1);
}


/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
*/

int _printf(const char *format, ...)
{
int i = 0, length = 0, length_return = 0;
int (*func)(va_list);
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] != '%')
{
write(1, &format[i], 1);
i++, length++;
}
else /*if % found*/
{
i++;
if (format[i] == '%')
{
write(1, &format[i], 1);
i++, length++;
}
else if (format[i] == '\0')
return (-1);
else
{
func = get_print_function(format[i]);
if (func == NULL)
{
print_prcentage();
length++;
}
else
{
length_return = func(args);
i++;
length += length_return;
}}}}
return (length);
}
