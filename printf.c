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
 * flags_restarted - put all flags equal zero again
 * @flags: the flags
 * return: nothing
*/
void flags_restarted(flags_t *flags)
{
flags->hash = 0;
flags->plus = 0;
flags->space = 0;
flags->l = 0;
flags->h = 0;
flags->width = 0;
}
/**
 * after_percentage - a function that handle cases if % is found
 * @format: is a character string. The format string is
 * composed of zero or more directives
 * @i: index
 * @args: the list contain characters
 * @flags: the flags
 * Return: length that added to printed string
*/
int after_percentage(const char *format, int *i, va_list args, flags_t *flags)
{
int length = 0;
int (*func)(va_list, flags_t *);
if (format[*i] == '%')
{
write(1, &format[*i], 1);
length++;
return (length);
}
if (format[*i] == '\0')
return (-1);
while (get_flag(format, i, flags))
(*i)++;
func = get_print_function(format[*i], flags);
if (func == NULL)
{
print_prcentage();
return (-2);
}
length += func(args, flags);
return (length);
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
flags_t flags = {0, 0, 0, 0, 0, 0};
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
length_return = after_percentage(format, &i, args, &flags);
if (length_return == -1)
return (-1);
if (length_return == -2)
{
length++;
continue;
}
length += length_return;
i++;
}}
return (length);
}
