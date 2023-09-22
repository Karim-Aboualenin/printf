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
 * flags_restared - put all flags equal zero again
 * @flags: the flags
 * return: nothing
*/
void flags_restarted(flags_t *flags)
{
flags->hash = 0;
flags->plus = 0;
flags->space = 0;
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
int (*func)(va_list, flags_t *);
flags_t flags = {0, 0, 0};
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
flags_restarted(&flags);
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
while (get_flag(format[i], &flags))
i++;
func = get_print_function(format[i], &flags);
if (func == NULL)
{
print_prcentage();
length++;
}
else
{
length_return = func(args, &flags);
i++;
length += length_return;
}}}}
return (length);
}
