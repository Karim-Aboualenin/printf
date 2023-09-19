#include "main.h"

/**
 * print_char - print a character
 * @args: the list contain characters
 * Return: 1
*/

int print_char(va_list args)
{
char s;
s = va_arg(args, int);
if (s == 0)
s = '\0';
write(1, &s, 1);
return (1);
}
/**
 * print_string - print a string
 * @args: the list contain characters
 * Return: number of characters in the string
*/

int print_string(va_list args)
{
int len;
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
len = _strlen(s);
write(1, s, len);
return (len);
}
 