#include "main.h"

/**
 * print_char - print a character
 * @args: the list contain characters
 * @flags: the flags
 * Return: 1
*/

int print_char(va_list args, flags_t *flags)
{
char s;
int iter, length = 0;
char temp = ' ';
s = va_arg(args, int);
if (s == 0)
s = '\0';
if (flags->width > 1)
{
for (iter = 0; iter < flags->width - 1; iter++)
{
write(1, &temp, 1);
length++;
}
}
write(1, &s, 1);
length++;
return (length);
}
/**
 * print_string - print a string
 * @args: the list contain characters
 * @flags: the flags
 * Return: number of characters in the string
*/

int print_string(va_list args, flags_t *flags)
{
int len, org_len, iter;
char *s = va_arg(args, char *);
char temp = ' ';
if (s == NULL)
s = "(null)";
org_len = _strlen(s);
len = org_len;
if (flags->width > org_len)
{
for (iter = 0; iter < flags->width - org_len; iter++)
{
write(1, &temp, 1);
len++;
}}
write(1, s, org_len);
return (len);
}
