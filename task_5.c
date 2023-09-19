#include "main.h"

/**
 * print_STRING - print a string and Non printable
 * characters (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the
 * ASCII code value in hexadecimal
 * @args: the list contain characters
 * Return: number of characters in the string
*/

int print_STRING(va_list args)
{
int len, i;
char *s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
{
if (s[i] >= 32 && s[i] < 127)
{
write (1, &s[i], 1);
}
else if (s[i] < 16)
_printf("\\x0%X", s[i]);
else
_printf("\\x%X", s[i]);
}
return (len);
}
