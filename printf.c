#include "main.h"

/**
 * print_prcentage - print precentage sign
 * Return: Nothing
*/
void print_prcentage(void)
{
char temp = '%';
write(1, &temp, 1);
}
/**
 * after_precentage - a function that handle cases if % is found
 * c: the char after percentage
 * args: the list contain characters
 * Return: length that added to printed string
*/
int after_percentage(char c, va_list args)
{
int length = 0;
int (*func)(va_list);
if (c == '%')
{
write(1, &c, 1);
length++;
return(length);
}
if (c == '\0')
return (-1);
func = get_print_function(c);
if (func == NULL)
{
print_prcentage();
length++;
}
length = func(args);
return(length);
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
length_return = after_percentage(format[i], args);
if (length_return == -1)
return (-1);
length += length_return;
i++;
}}
return (length);
}
