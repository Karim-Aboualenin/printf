#include "main.h"

/**
 * print_STRING - print a string and Non printable
 * characters (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the
 * ASCII code value in hexadecimal
 * @args: the list contain characters
 * @flags: the flags
 * Return: number of characters in the string
*/

int print_STRING(va_list args, flags_t *flags)
{
int len = 0, i, iter, org_len = 0;
char temp = ' ';
char *s = va_arg(args, char *);
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 32 && s[i] < 127)
{
write(1, &s[i], 1);
org_len++;
}
else if (s[i] > 14)
org_len += _printf("\\x%X", s[i]);
else
org_len += _printf("\\x0%X", s[i]);
}
if (flags->width > org_len)
{
for (iter = 0; iter < flags->width - org_len; iter++)
{
write(1, &temp, 1);
len++;
}}
len += org_len;
return (len);
}
